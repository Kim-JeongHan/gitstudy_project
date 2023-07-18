# Simple ros2 topic pkg


## Run ros_topic_example pkg
Terminal 1.
```bash
ros2 run ros_topic_example helloworld_subscriber
```
Terminal 2.
```bash
ros2 run ros_topic_example helloworld_publisher
```
Or you can run whole node using `ros2 lanuch` command

```bash
ros2 launch ros_topic_example ros_topic_example.launch.py
```