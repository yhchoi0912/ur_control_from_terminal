#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include "sensor_msgs/msg/joint_state.hpp"
#include "ur_dashboard_msgs/srv/get_robot_mode.hpp"
#include "ur_dashboard_msgs/srv/get_safety_mode.hpp"
#include "move_relative_ur/msg/error_msg.hpp"
#include "ur_dashboard_msgs/srv/is_program_running.hpp"
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <string>

class RobotMonitoringNode : public rclcpp::Node
{
public:
    RobotMonitoringNode() : Node("robot_monitoring_node")
    {
        // 로봇의 상태(동작 중인지(servo on), 정지 상태인지(servo off) 등) 확인
        robot_mode_sub_ =
            this->create_client<ur_dashboard_msgs::srv::GetRobotMode>("/dashboard_client/get_robot_mode"); //,
        // std::bind(&RobotMonitoringNode::robotModeCallback, this, std::placeholders::_1));

        // 현재 로봇의 안전 모드 확인
        safety_mode_sub_ =
            this->create_client<ur_dashboard_msgs::srv::GetSafetyMode>("/dashboard_client/get_safety_mode"); //,
        // std::bind(&RobotMonitoringNode::safetyModeCallback, this, std::placeholders::_1));

        // 주기적으로 로봇 모드 서비스 요청을 보내는 타이머
        robot_mode_timer_ = this->create_wall_timer(std::chrono::milliseconds(100),
                                                    std::bind(&RobotMonitoringNode::requestRobotMode, this));

        // 주기적으로 안전 모드 서비스 요청을 보내는 타이머
        safety_mode_timer_ = this->create_wall_timer(std::chrono::milliseconds(100),
                                                     std::bind(&RobotMonitoringNode::requestSafetyMode, this));

        // `/joint_states`를 구독하여 로봇의 실제 움직임을 감지
        joint_state_sub_ = this->create_subscription<sensor_msgs::msg::JointState>(
            "/joint_states", 10, std::bind(&RobotMonitoringNode::jointStateCallback, this, std::placeholders::_1));

        // 오류 메시지를 move_relative_node에 전달하는 퍼블리셔
        error_pub_ = this->create_publisher<move_relative_ur::msg::ErrorMsg>("robot_monitoring", 10);

        find_node_timer_ = this->create_wall_timer(std::chrono::milliseconds(100),
                                                   std::bind(&RobotMonitoringNode::checkIfVelNodeIsRunning, this));

        robot_status_client_ =
            this->create_client<ur_dashboard_msgs::srv::IsProgramRunning>("/dashboard_client/program_running");

        // if (robot_status_client_ == nullptr) {
        //     RCLCPP_ERROR(this->get_logger(), "❌ Failed to create the service client for
        //     /dashboard_client/program_running");
        // } else {
        //     RCLCPP_INFO(this->get_logger(), "✅ Successfully created the service client.");
        // }

        timer_ =
            this->create_wall_timer(std::chrono::seconds(1), std::bind(&RobotMonitoringNode::sendRobotStatusRequest, this));

        RCLCPP_INFO(this->get_logger(), "RobotMonitoringNode 시작됨. 로봇 상태 감시 중...");
    }

private:
    int safe_respones = 0;
    // 로봇 상태 서비스 요청 함수
    void sendRobotStatusRequest()
    {
        auto request = std::make_shared<ur_dashboard_msgs::srv::IsProgramRunning::Request>();

        // 서비스가 준비될 때까지
        while (!robot_status_client_->wait_for_service(std::chrono::seconds(1)))
        {
            RCLCPP_WARN(this->get_logger(), "Waiting for the service to be available...");
        }

        // 준비되면 비동기 요청 보내기
        auto future_result = robot_status_client_->async_send_request(
            request, std::bind(&RobotMonitoringNode::robotProgramState, this, std::placeholders::_1));
    }

    // 로봇이 알람으로 정지된 후 정상 가동되었는지 확인
    // 가동이 되었으면 로봇 프로그램 일시정지 상태를 해지하고, 플레이 상태로 바꿈
    // 일시정지 상태이면 로봇이 동작하지 않기 때문

    void robotProgramState(rclcpp::Client<ur_dashboard_msgs::srv::IsProgramRunning>::SharedFuture future)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        RCLCPP_INFO(this->get_logger(), "robotProgramState 함수 진입");

        // int max_attempts = 5;  // 최대 재시도 횟수
        // int attempts = 0;
        auto state_response = future.get();
        // RCLCPP_INFO(this->get_logger(), "safe_respones?: %d", safe_respones);
        // RCLCPP_INFO(this->get_logger(), "program_running: %s", state_response->program_running ? "true" : "false");

        // 로봇 알람이 발생한 경우 로봇 프로그램은 일시정지가 되는데 그것을 해제하기 위해 로봇이 일반상태가 아닌 경우에만
        // 아래 함수를 실행하도록 함
        if (state_response->program_running == false && robot_mode != 1)
        {
            RCLCPP_INFO(this->get_logger(), "robotProgramState 내부에서 로봇 알람 확인 1");
            // while(true)//&& attempts<max_attempts)
            //{
            // RCLCPP_INFO(this->get_logger(), "robotProgramState 내부에서 로봇 알람 확인 2");
            // ret = system("ros2 service call /dashboard_client/play std_srvs/srv/Trigger");

            FILE *pipe = popen("ros2 service call /dashboard_client/play std_srvs/srv/Trigger", "r");
            if (!pipe)
            {
                std::cerr << "Failed to execute command!" << std::endl;
                return;
            }
            RCLCPP_INFO(this->get_logger(), "/dashboard_client/play std_srvs/srv/Trigger에 메시지 보내기 성공.");
            char buffer[128];
            std::string result;

            while (fgets(buffer, sizeof(buffer), pipe) != nullptr)
            {
                result += buffer;
            }
            pclose(pipe);

            std::cout << "Command output:\n"
                      << result << std::endl;

            // "success: False"가 포함되어 있으면 실패 처리
            // if (result.find("success=False") != std::string::npos) {
            //    continue;
            //}
            // RCLCPP_INFO(this->get_logger(), "ret? %d", ret);
        }

        // 실행 상태를 다시 확인하여 Play 상태이면 알람 플래그를 1로 바꿈
        auto check_state_request = std::make_shared<ur_dashboard_msgs::srv::IsProgramRunning::Request>();
        auto check_future = robot_status_client_->async_send_request(check_state_request);
        auto check_response = check_future.get();

        if (check_response->program_running == true)
            robot_mode = 1;
        // safe_respones = 0;
        return;
    }

    int sendMagFlag = 0;
    std::string error_msg = "";

    bool isRobotMonitoringRunning_ = false;
    bool isRobotMoveRunning_ = false;

    void checkIfVelNodeIsRunning()
    {
        auto node_names = this->get_node_names(); // 실행 중인 노드 목록 가져오기
        bool node_found = std::find(node_names.begin(), node_names.end(), "/ur_script_relative_move") != node_names.end();

        // 실행 중인 노드 목록에서 특정 노드 찾기
        if (isRobotMonitoringRunning_ != node_found)
        {
            // RCLCPP_INFO(this->get_logger(), "노드 [%s] 실행 중!", "//ur_script_relative_move");
            isRobotMonitoringRunning_ = true;
        }
        else
        {
            // RCLCPP_WARN(this->get_logger(), "노드 [%s] 실행되지 않음!", "//ur_script_relative_move");
            isRobotMonitoringRunning_ = false;
        }
    }
    // void checkIfMoveNodeIsRunning() {
    //     auto node_names = this->get_node_names();  // 실행 중인 노드 목록 가져오기
    //     bool node_found = std::find(node_names.begin(), node_names.end(), "/robot_monitoring_node") !=
    //     node_names.end();
    //
    //    // 실행 중인 노드 목록에서 특정 노드 찾기
    //    if (isRobotMoveRunning_ != node_found ) {
    //        //RCLCPP_INFO(this->get_logger(), "노드 [%s] 실행 중!", "/robot_monitoring_node");
    //        isRobotMoveRunning_ = true;
    //    } else {
    //        //RCLCPP_WARN(this->get_logger(), "노드 [%s] 실행되지 않음!", "/robot_monitoring_node");
    //        isRobotMoveRunning_ = false;
    //
    //    }
    //}

    // ur_script_relative_move 노드가 실행중이라면 관절의 속도를 확인
    // 로봇의 멈춰있다면 신호를 사용자 입력을 받기위해 "로봇이 정지 상태에 있음!"를 ur_script_relative_move에 보냄
    // 한 번 보내고 나면 계속 보내지 않도록 prevStoppedState 변수로 로봇의 직전 상태를 관리
    bool prevStoppedState = false; // ✅ 이전 정지 상태 저장
    void jointStateCallback(const sensor_msgs::msg::JointState::SharedPtr msg)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        // RCLCPP_WARN(this->get_logger(), "jointStateCallback 실행 0");
        if (isRobotMonitoringRunning_ && !prevStoppedState)
        {
            // std::string error_msg = msg->message;
            if (msg->velocity.empty())
                return; // 관절 속도 데이터가 없으면 종료
            // RCLCPP_WARN(this->get_logger(), "jointStateCallback 실행 0");
            int tempVelCnt = 0;
            bool isCurrentlyStopped = false;

            // 모든 관절을 검사하여 움직이는 관절 개수 확인
            for (size_t i = 0; i < msg->velocity.size(); i++)
            {
                RCLCPP_WARN(this->get_logger(), "jointStateCallback 실행 1");
                if (std::abs(msg->velocity[i]) > 0.001)
                {
                    // RCLCPP_WARN(this->get_logger(), "jointStateCallback 실행 2");
                    tempVelCnt += 1;
                }
            }

            // 6개의 관절 모두가 -0.001 ~ 0.001 범위 안에 있으면 멈춘 상태로 판단
            if (tempVelCnt == 0)
            {
                // RCLCPP_WARN(this->get_logger(), "jointStateCallback 실행 3");
                isCurrentlyStopped = true;
            }

            // 이전 상태와 현재 상태 비교 → 중복 메시지 전송 방지
            if (isCurrentlyStopped && !prevStoppedState)
            {
                // RCLCPP_WARN(this->get_logger(), "jointStateCallback 실행 4");
                error_msg = "로봇이 정지 상태에 있음!";
                sendMagFlag = 1;
            }

            // 메시지 전송 후 상태 업데이트
            if (sendMagFlag == 1)
            {
                // RCLCPP_WARN(this->get_logger(), "jointStateCallback 실행 5");
                sendMagFlag = 0;
                sendErrorMessage(error_msg);
                error_msg = "";
            }
            prevStoppedState = isCurrentlyStopped;
        }
    }

    // ur_script_relative_move 노드에 메시지를 보내는 역할
    void sendErrorMessage(const std::string &error_msg)
    {
        if (!error_pub_)
        {
            RCLCPP_ERROR(this->get_logger(), " error_pub_ 퍼블리셔가 초기화되지 않음!");
            return;
        }
        auto msg = move_relative_ur::msg::ErrorMsg();
        msg.message = error_msg;
        error_pub_->publish(msg);
        // RCLCPP_WARN(this->get_logger(), " 오류 발생: %s", error_msg.c_str());
    }

    // ur로봇 관리 노드에 로봇의 상태를 알기위해 응답을 요구함
    void requestRobotMode()
    {
        if (!robot_mode_sub_->wait_for_service(std::chrono::milliseconds(1000)))
        {
            RCLCPP_WARN(this->get_logger(), "🚨 Robot Mode 서비스가 실행되지 않음!");
            return;
        }
        auto request = std::make_shared<ur_dashboard_msgs::srv::GetRobotMode::Request>();
        auto future = robot_mode_sub_->async_send_request(
            request, std::bind(&RobotMonitoringNode::robotModeResponse, this, std::placeholders::_1));
    }

    // 로봇 컨트롤러와 pc가 연결이 되지 않았거나, 컨트롤러와 로봇이 연결되지 않은 경우 알람
    void robotModeResponse(rclcpp::Client<ur_dashboard_msgs::srv::GetRobotMode>::SharedFuture future)
    {
        auto response = future.get();
        // RCLCPP_INFO(this->get_logger(), "🟢 로봇 모드 응답 받음: %d", response->robot_mode.mode);
        if (response->robot_mode.mode == -1)
        {
            sendMagFlag = 1;
            error_msg = "컨트롤러가 감지되지 않음! 컨트롤러와의 연결을 확인하세요";
            RCLCPP_WARN(this->get_logger(), "%s", error_msg.c_str());
        }
        else if (response->robot_mode.mode == 0)
        {
            sendMagFlag = 1;
            error_msg = "로봇이 컨트롤러와 연결되지 않음!";
            RCLCPP_WARN(this->get_logger(), "%s", error_msg.c_str());
        }
        if (sendMagFlag == 1)
        {
            sendMagFlag = 0;
            sendErrorMessage(error_msg);
            error_msg = "";
        }
        // else {
        //     RCLCPP_INFO(this->get_logger(), "✅ 로봇 정상 동작 중.");
        // }
    }

    // 안전 모드 서비스 요청 함수
    void requestSafetyMode()
    {
        if (!safety_mode_sub_->wait_for_service(std::chrono::milliseconds(1000)))
        {
            RCLCPP_WARN(this->get_logger(), "🚨 Safety Mode 서비스가 실행되지 않음!");
            return;
        }

        auto request = std::make_shared<ur_dashboard_msgs::srv::GetSafetyMode::Request>();

        auto future = safety_mode_sub_->async_send_request(
            request, std::bind(&RobotMonitoringNode::safetyModeResponse, this, std::placeholders::_1));
    }

    // 안전 모드 응답 처리 함수
    size_t robot_mode; // 로봇 알람이 발생한 경우 로봇 프로그램은 일시정지가 되는데 그것을 해제하기 위한 변수
    void safetyModeResponse(rclcpp::Client<ur_dashboard_msgs::srv::GetSafetyMode>::SharedFuture future)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        auto response = future.get();
        RCLCPP_INFO(this->get_logger(), "안전 모드 응답 받음: %d", response->safety_mode.mode);

        switch (response->safety_mode.mode)
        {
        case 3:
        {
            sendMagFlag = 1;
            error_msg = "로봇 보호 정지!";
            safe_respones = 3;
            robot_mode = response->safety_mode.mode;
            break;
        }
        case 4:
        {
            sendMagFlag = 1;
            error_msg = "로봇 복구 모드!";
            safe_respones = 4;
            robot_mode = response->safety_mode.mode;
            break;
        }
        case 5:
        {
            sendMagFlag = 1;
            error_msg = "안전 보호 장치 발동됨!";
            safe_respones = 5;
            robot_mode = response->safety_mode.mode;
            break;
        }
        case 6:
        {
            sendMagFlag = 1;
            error_msg = "시스템 비상 정지 발생!";
            safe_respones = 6;
            robot_mode = response->safety_mode.mode;
            break;
        }
        case 7:
        {
            sendMagFlag = 1;
            error_msg = "로봇 비상 정지 발생!";
            robot_mode = response->safety_mode.mode;
            safe_respones = 7;
            break;
        }
        case 12:
        {
            sendMagFlag = 1;
            error_msg = "자동 모드에서 보호 정지가 발생함!";
            robot_mode = response->safety_mode.mode;
            safe_respones = 12;
            break;
        }
            // default:
            //     RCLCPP_INFO(this->get_logger(), "✅ 로봇 정상 모드 (mode: %d)", response->safety_mode.mode);
            //     return;
        }

        if (sendMagFlag == 1)
        {
            sendMagFlag = 0;
            sendErrorMessage(error_msg);
            error_msg = "";
        }
    }

    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;
    rclcpp::Client<ur_dashboard_msgs::srv::GetRobotMode>::SharedPtr robot_mode_sub_;
    rclcpp::Client<ur_dashboard_msgs::srv::GetSafetyMode>::SharedPtr safety_mode_sub_;
    rclcpp::TimerBase::SharedPtr robot_mode_timer_;
    rclcpp::TimerBase::SharedPtr safety_mode_timer_;
    rclcpp::Publisher<move_relative_ur::msg::ErrorMsg>::SharedPtr error_pub_;
    rclcpp::TimerBase::SharedPtr find_node_timer_;
    rclcpp::Client<ur_dashboard_msgs::srv::IsProgramRunning>::SharedPtr robot_status_client_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RobotMonitoringNode>();
    rclcpp::spin(node);
    // RCLCPP_INFO(node->get_logger(), "monitoring 노드가 그냥 종료되는건가??");
    rclcpp::shutdown();
    return 0;
}
