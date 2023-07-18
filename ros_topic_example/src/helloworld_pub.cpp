#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

//using namespace std::chrono_literals;  // namespace 사용 시 1s로 쓸 수 있음.

class HelloworldPublisher : public rclcpp::Node  // rclcpp::Node 클래스 상속
{
public:
  HelloworldPublisher()
  : Node("helloworld_publisher"), count_(0)  // Node name을 "hello_publisher"로, count_를 0으로 초기화
  {
    auto qos_profile = rclcpp::QoS(rclcpp::KeepLast(10));  // 10정도의 size인 Queue형태로 보관
    // rclcpp::Node::create_publisher함수는 rclcpp::Publisher를 create하고 return한다.
    // helloworld_publisher_는 rclcpp::Publisher class를 가리키는 클래스 포인터 객체가 됨
    helloworld_publisher_ = this->create_publisher<std_msgs::msg::String>(
      "helloworld", qos_profile);
    timer_ = this->create_wall_timer(
    std::chrono_literals::operator""s(1), std::bind(&HelloworldPublisher::publish_helloworld_msg, this));
  }

private:
  void publish_helloworld_msg()
  {
    auto msg = std_msgs::msg::String();
    msg.data = "Hello World: " + std::to_string(count_++);
    RCLCPP_INFO(this->get_logger(), "Published message: '%s'", msg.data.c_str());
    helloworld_publisher_->publish(msg);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr helloworld_publisher_;
  size_t count_;
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<HelloworldPublisher>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}