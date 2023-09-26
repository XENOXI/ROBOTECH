#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>
#include <thread>


#include "execute_turtle_commands/action/message_turtle_commands.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"


namespace tcom
{
class TCommandsActionClient : public rclcpp::Node
{
public:
  using TurtleCommands = execute_turtle_commands::action::MessageTurtleCommands;
  using GoalHandleTCommands = rclcpp_action::ClientGoalHandle<TurtleCommands>;

  explicit TCommandsActionClient(const rclcpp::NodeOptions & options)
  : Node("tcommands_action_client", options)
  {

    this->client_ptr_ = rclcpp_action::create_client<TurtleCommands>(
      this,
      "tcommands");

    set_goals();


    std::thread{std::bind(&TCommandsActionClient::send_goal, this)}.detach();

    


  }

  void send_goal()
  {
    using namespace std::placeholders;

    if (!this->client_ptr_->wait_for_action_server()) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
      rclcpp::shutdown();
    }

    auto send_goal_options = rclcpp_action::Client<TurtleCommands>::SendGoalOptions();
    send_goal_options.goal_response_callback =
      std::bind(&TCommandsActionClient::goal_response_callback, this, _1);
    send_goal_options.feedback_callback =
      std::bind(&TCommandsActionClient::feedback_callback, this, _1, _2);
    send_goal_options.result_callback =
      std::bind(&TCommandsActionClient::result_callback, this, _1);

    for (auto goal : goals)
    {
      is_done = false;
      RCLCPP_INFO(this->get_logger(), "Sending goal");
      this->client_ptr_->async_send_goal(goal, send_goal_options);
      while (!is_done) {};
    }

    
    rclcpp::shutdown();
    
  }

private:
  std::vector<TurtleCommands::Goal> goals;
  bool is_done=false;

  rclcpp_action::Client<TurtleCommands>::SharedPtr client_ptr_;
  rclcpp::TimerBase::SharedPtr timer_;


  void set_goals()
  {
    TurtleCommands::Goal gl;
    gl.command = "forward";
    gl.s = 2;
    goals.push_back(gl);

    gl.command = "turn_right";
    gl.angle = 90;
    goals.push_back(gl);

    gl.command = "forward";
    gl.s = 1;
    goals.push_back(gl);

  }

  void goal_response_callback(const GoalHandleTCommands::SharedPtr & goal_handle)
  {
    if (!goal_handle) {
      RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
    } else {
      RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
    }
  }

  void feedback_callback(
    GoalHandleTCommands::SharedPtr,
    const std::shared_ptr<const TurtleCommands::Feedback> feedback)
  {
    std::stringstream ss;
    ss << "Turtle dist: " << feedback->odom;
    RCLCPP_INFO(this->get_logger(), ss.str().c_str());
  }

  void result_callback(const GoalHandleTCommands::WrappedResult & result)
  {
    switch (result.code) {
      case rclcpp_action::ResultCode::SUCCEEDED:
        break;
      case rclcpp_action::ResultCode::ABORTED:
        RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
        return;
      case rclcpp_action::ResultCode::CANCELED:
        RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
        return;
      default:
        RCLCPP_ERROR(this->get_logger(), "Unknown result code");
        return;
    }
    std::stringstream ss;
    ss << "Result received: " << result.result->result;
    is_done = result.result->result;
    RCLCPP_INFO(this->get_logger(), ss.str().c_str());

  }
};  // class FibonacciActionClient

}  // namespace action_tutorials_cpp

RCLCPP_COMPONENTS_REGISTER_NODE(tcom::TCommandsActionClient)