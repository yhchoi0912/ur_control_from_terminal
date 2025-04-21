cmake_minimum_required(VERSION 3.5)
project(move_relative_ur)

# ✅ 필수 패키지 찾기
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(ur_dashboard_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_srvs REQUIRED)

find_package(rosidl_default_generators REQUIRED)


# msg_files라는 이름으로 사용자 정의 인터페이스들을 묶는다(찾으라고 하는 것)
# 이후에 이것들을 사용하기 위함이다
set(msg_files
  "msg/ErrorMsg.msg"
)

# set에서 묶은 msg_files를 통하여 사용자정의 인터페이스들을 .hpp나 .py로 바꾸어줌
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
)


# ✅ 실행 가능한 노드 추가
add_executable(move_relative_node src/move_relative.cpp)

ament_target_dependencies(move_relative_node rclcpp std_msgs geometry_msgs ur_dashboard_msgs std_srvs rosidl_default_runtime)

add_executable(robot_monitoring_node src/move_monitoring_node.cpp)

ament_target_dependencies(robot_monitoring_node rclcpp std_msgs geometry_msgs ur_dashboard_msgs std_srvs sensor_msgs rosidl_default_runtime)


rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")

# 실행 파일에 타입 서포트를 추가하는 것
target_link_libraries(move_relative_node ${cpp_typesupport_target})
target_link_libraries(robot_monitoring_node ${cpp_typesupport_target})

install(TARGETS
  move_relative_node
  robot_monitoring_node
  DESTINATION lib/${PROJECT_NAME})
  
  
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

