#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>  // 올바른 메시지 타입
#include <std_msgs/msg/string.hpp>  // 추가
#include <iostream>
#include <sstream>
//#include <algorithm>  // std::find 사용
#include "move_relative_ur/msg/error_msg.hpp"
#include <csignal>  // SIGINT 핸들링
#include <thread>

#define DEG2RAD (M_PI / 180.0)  // 도 → 라디안 변환 매크로

// SIGINT 핸들러 (Ctrl+C 입력 감지)
void signalHandler(int signal) {
    if (signal == SIGINT) {
        
        std::cout << "\n🚨 SIGINT(Ctrl+C) 감지됨. 프로그램을 종료합니다...\n";
        system("kill -9 $(pgrep -f move_relative_node)");
        rclcpp::shutdown();
        exit(0);
    }
}

class URScriptRelativeMove : public rclcpp::Node
{
public:
    URScriptRelativeMove() : Node("ur_script_relative_move")
    {
        publisher_ = this->create_publisher<std_msgs::msg::String>("/urscript_interface/script_command", 10);
    
        error_sub_ = this->create_subscription<move_relative_ur::msg::ErrorMsg>(
            "robot_monitoring", 10,
            std::bind(&URScriptRelativeMove::errorCallback, this, std::placeholders::_1));
            
        error_process_timer_ = this->create_wall_timer(
            std::chrono::milliseconds(500),  // ✅ 500ms(0.5초)마다 실행
            std::bind(&URScriptRelativeMove::processErrorMessage, this));

        RCLCPP_INFO(this->get_logger(), "생성자 실행됨");
    }

    void errorCallback(const move_relative_ur::msg::ErrorMsg::SharedPtr msg) {
        error_msg = msg->message;
        //메시지 수신만 함
    }

    void processErrorMessage() {
        if (error_msg.empty()) return;  // 메시지가 없으면 처리 안 함

        if (error_msg == "로봇이 정지 상태에 있음!") {
            RCLCPP_INFO(this->get_logger(), "로봇 이동을 위한 오프셋 입력을 받습니다.");
            std::thread(&URScriptRelativeMove::run, this).detach();  // ✅ 별도 스레드에서 실행
        } else {
            //error_msg.clear();
            RCLCPP_WARN(this->get_logger(), "오류 메시지 수신: %s. 안전을 위해 프로그램을 종료합니다. 로봇을 확인하세요", error_msg.c_str());
            system("kill -9 $(pgrep -f move_relative_node)");
            //error_msg_check = true;
            //rclcpp::shutdown(); // 노드 종료
            //exit(0); // 프로그램 강제 종료(쓰레드 종료를 위함)
        }

        error_msg.clear();  // ✅ 메시지 처리 후 초기화
    }

    void run() {
        RCLCPP_INFO(this->get_logger(), "run 함수 실행.");
        getValidInput();  // ✅ 사용자 입력 받기
        moveRelative();   // ✅ 로봇 이동 실행
    }

    void getValidInput() {
        while (rclcpp::ok()) {  // 종료 신호 감지 시 루프 탈출
            std::cout << "이동할 상대 위치 (x[mm], y[mm], z[mm], rx[deg], ry[deg], rz[deg]) 입력: ";
            
            std::string input;
            if (!std::getline(std::cin, input)) {  // Ctrl+D 또는 EOF 처리
                if (!rclcpp::ok()) return;  // Ctrl+C 감지 시 종료
                rclcpp::spin_some(this->get_node_base_interface());  // 이벤트 처리
            }
            std::istringstream iss(input);

            std::vector<double> values;
            double temp;

            while (iss >> temp) {  // 입력된 값들을 하나씩 읽어 저장
                values.push_back(temp);
            }

            // 숫자 6개를 입력받음(문자거나 6보다 작거나 크면 안됨)
            if (!(values.size() == 6)) {
                //if(error_msg_check) 
                //{
                //    continue;
                //}
                std::cout << "⚠ 6개의 숫자를 입력해야 합니다. 다시 입력해주세요.\n";
                continue;
            }  

            // 소수점 3자리까지 반올림
            dx = std::round(values[0] * 1000.0) / 1000.0;
            dy = std::round(values[1] * 1000.0) / 1000.0;
            dz = std::round(values[2] * 1000.0) / 1000.0;
            drx = std::round(values[3] * 1000.0) / 1000.0;
            dry = std::round(values[4] * 1000.0) / 1000.0;
            drz = std::round(values[5] * 1000.0) / 1000.0;  
           
            break; // 입력이 정상적으로 완료되었으면 루프 종료
            
        }
        return;
    }

    void moveRelative()
    {
        // 도(degree)를 라디안(radian)으로 변환
        double drx_rad = drx * DEG2RAD;
        double dry_rad = dry * DEG2RAD;
        double drz_rad = drz * DEG2RAD;

        // get_actual_tcp_pose는 tool 좌표 기준으로 움직인다
        std::ostringstream command;
        command << "movel(pose_trans(get_actual_tcp_pose(), p[" 
                << dx / 1000.0 << ", "  // mm → m 변환
                << dy / 1000.0 << ", "
                << dz / 1000.0 << ", "
                << drx_rad << ", "
                << dry_rad << ", "
                << drz_rad << "]))\n";

        auto msg = std_msgs::msg::String();
        msg.data = command.str();
        publisher_->publish(msg);

        RCLCPP_INFO(this->get_logger(), "Sent move relative command: %s", msg.data.c_str());
        return;
    }   

private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::Subscription<move_relative_ur::msg::ErrorMsg>::SharedPtr error_sub_;
    rclcpp::TimerBase::SharedPtr error_process_timer_;
    //bool error_msg_check = false;
    std::string error_msg = "";
   
    // 클래스 멤버 변수
    double dx = 0.0, dy = 0.0, dz = 0.0, drx = 0.0, dry = 0.0, drz = 0.0;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<URScriptRelativeMove>();
    signal(SIGINT, signalHandler);  // Ctrl+C 감지
    rclcpp::executors::MultiThreadedExecutor executor;

    //node->getValidInput(); // 사용자 offset 입력
    //node->moveRelative();  // 상대 이동

    //node->run();
    executor.add_node(node);
    executor.spin();
    //RCLCPP_INFO(node->get_logger(), "move 노드 종료??");
    rclcpp::shutdown();
    return 0;
}
