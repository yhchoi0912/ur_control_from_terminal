# ur_control_from_terminal

os : ubuntu 24.04
ros version : ros2 humble

Move the robot using the RPY coordinate received from the terminal.

This package have 2 nodes.

Move_monitoring_node is monitoring node thatchecks the connection status between the robot and the PC,
monitors robot alarms and other alerts, and sends coordinate frames to the robot.

move_relative gets input from terminal.
