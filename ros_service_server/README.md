# git_study_project
---
## 길인호
c++ ros service_server코드를 추가하세요 파일이름 ros_service_server

* #include "ros/ros.h"
  #include "beginner_tutorials/AddTwoInts.h"
---
	헤더파일 선언
---
* bool add(beginner_tutorials::AddTwoInts::Request  &req,
  beginner_tutorials::AddTwoInts::Response &res)
---
	2개의 Request로 1하나의 Response를 갖고 값을 Return
---
* {
  res.sum = req.a + req.b;
  ROS_INFO("request: x=%ld, y=%ld", (long int)req.a, (long int)req.b);
  ROS_INFO("sending back response: [%ld]", (long int)res.sum);
  return true;
}
---
	sum은 request되는 변수 a와 b의 합으로 정의되며 ROS_INFO함수를 통해 Request된 값과 Response되는 값을 출력한다.
---
* ros::ServiceServer service = n.advertiseService("add_two_ints", add);
---
	NodeHandle을 통해 service를 발행하고 헤더파일을 통해 service type을 받아온다.
