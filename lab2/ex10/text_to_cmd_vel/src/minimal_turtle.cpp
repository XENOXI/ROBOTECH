// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class MinimalTurtle : public rclcpp::Node
{
public:
  MinimalTurtle()
  : Node("minimal_turtle")
  {
    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
    subscription_ = this->create_subscription<std_msgs::msg::String>(
      "cmd_text", 10, std::bind(&MinimalTurtle::topic_callback, this, std::placeholders::_1));
      
  }

private:
  void topic_callback(const std_msgs::msg::String & msg) const
  {
    geometry_msgs::msg::Twist result;
    result.angular = geometry_msgs::msg::Vector3(rosidl_runtime_cpp::MessageInitialization::ZERO);
    result.linear = geometry_msgs::msg::Vector3(rosidl_runtime_cpp::MessageInitialization::ZERO);
    auto str = std::string(msg.data.c_str());
    RCLCPP_INFO(this->get_logger(), "I heard: '%s'",str.data());

    if (str=="turn_right")
      result.angular.set__z(-1.5);
    else if (str == "turn_left")
      result.angular.set__z(-1.5);
    else if (str == "move_forward")
      result.linear.set__x(1);
    else if (str == "move_backward")
      result.linear.set__x(-1);
    
    publisher_->publish(result);
  }
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalTurtle>());
  rclcpp::shutdown();
  return 0;
}
