#include "rclcpp/rclcpp.hpp"
#include "full_name_message/srv/full_name_sum_service.hpp"
#include <memory>

void add(const std::shared_ptr<full_name_message::srv::FullNameSumService::Request> request,
          std::shared_ptr<full_name_message::srv::FullNameSumService::Response>      response)
{
  response->full_name = request->first_name + " " + request->name + " " + request->last_name;
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %s %s %s",
                request->first_name.c_str(), request->name.c_str(), request->last_name.c_str());
 }

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("get_name_server");

  rclcpp::Service<full_name_message::srv::FullNameSumService>::SharedPtr service =
    node->create_service<full_name_message::srv::FullNameSumService>("get_name", &add);

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add strings.");

  rclcpp::spin(node);
  rclcpp::shutdown();
}