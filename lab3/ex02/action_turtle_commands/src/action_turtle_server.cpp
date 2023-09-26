#include <functional>
#include <memory>
#include <thread>
#define M_PI 3.14159265358979323846

#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"
#include "execute_turtle_commands/action/message_turtle_commands.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"


namespace tcom
{
class TCommandsActionServer : public rclcpp::Node
{
private:
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
  rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_;


  typedef struct data_t
  {
    int dist=0;
    int angle=0;
    float x=0,y=0; 
    float l_x=0,l_y=0; 
    bool result=0;
    int req_dist=0;
    int req_angle=0;

    bool reset;
    bool is_dist_cond = false;
  }data;

  std::shared_ptr<data> dt = std::make_shared<data>();

  void topic_callback(const turtlesim::msg::Pose& msg) const
  {
    if (dt->reset)
    {
      dt->x = msg.x;
      dt->y = msg.y;
      dt->reset = false;
      dt->result = false;
      dt->angle = static_cast<int>(msg.theta*180/M_PI);
    }
    
    dt->l_x =  std::sqrt(std::pow(msg.x-dt->x,2) + std::pow(msg.y-dt->y,2));
    dt->dist = std::sqrt(std::pow(msg.x-dt->x,2) + std::pow(msg.y-dt->y,2)) + 0.1;
    
    if ((dt->is_dist_cond && dt->dist == dt->req_dist) || (!dt->is_dist_cond && (dt->req_angle == static_cast<int>(msg.theta*180/M_PI) - dt->angle)))
      dt->result = true;
  }
public:

  using TurtleCommands = execute_turtle_commands::action::MessageTurtleCommands;
  using GoalHandleTCommands = rclcpp_action::ServerGoalHandle<TurtleCommands>;
  // using GoalHandleFibonacci = 

  explicit TCommandsActionServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions()) : Node("tcommands_action_server", options)
  {
    using namespace std::placeholders;
    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
    subscription_ = this->create_subscription<turtlesim::msg::Pose>(
      "turtle1/pose", 10, std::bind(&TCommandsActionServer::topic_callback, this, std::placeholders::_1));

    this->action_server_ = rclcpp_action::create_server<TurtleCommands>(
      this,
      "tcommands",
      std::bind(&TCommandsActionServer::handle_goal, this, _1, _2),
      std::bind(&TCommandsActionServer::handle_cancel, this, _1),
      std::bind(&TCommandsActionServer::handle_accepted, this, _1));
  }

private:
  rclcpp_action::Server<TurtleCommands>::SharedPtr action_server_;

  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const TurtleCommands::Goal> goal)
  {
    RCLCPP_INFO(this->get_logger(), "Received goal request with command %s", goal->command.c_str());
    (void)uuid;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandleTCommands> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
    (void)goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandleTCommands> goal_handle)
  {
    using namespace std::placeholders;
    // this needs to return quickly to avoid blocking the executor, so spin up a new thread
    std::thread{std::bind(&TCommandsActionServer::execute, this, _1), goal_handle}.detach();
  }

  void execute(const std::shared_ptr<GoalHandleTCommands> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Executing goal");
    rclcpp::Rate loop_rate(1);
    const auto goal = goal_handle->get_goal();
    auto feedback = std::make_shared<TurtleCommands::Feedback>(); 
    auto result = std::make_shared<TurtleCommands::Result>();

    geometry_msgs::msg::Twist msg;
  
    
    
    dt->req_dist = 0;
    dt->req_angle = 0;
    dt->reset = true;
    if (goal->command=="turn_right")
    {
      msg.angular.set__z(-static_cast<float>(goal->angle)/180*M_PI);
      dt->req_angle = -goal->angle;
      dt->is_dist_cond = false;
    }
    else if (goal->command == "turn_left")
    {
      msg.angular.set__z(static_cast<float>(goal->angle)/180*M_PI);
      dt->req_angle = goal->angle;
      dt->is_dist_cond = false;
    }
    else if (goal->command == "forward")
    {
      msg.linear.set__x(goal->s);
      dt->req_dist = goal->s;
      dt->is_dist_cond = true;
    }
    else if (goal->command == "backward")
    {
      msg.linear.set__x(-goal->s);
      dt->req_dist = goal->s;
      dt->is_dist_cond = true;
    }

    publisher_->publish(msg);
    dt->result = false;

    while (!dt->result && rclcpp::ok())
    {
      if (goal_handle->is_canceling()) {
        result->result = false;
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "Goal canceled");
        return;
      }
      RCLCPP_INFO(this->get_logger(),"%f",dt->l_x);
      feedback->odom = dt->dist;
      goal_handle->publish_feedback(feedback);

      loop_rate.sleep();
    }
    RCLCPP_INFO(this->get_logger(),"%f",dt->l_x);
    if (rclcpp::ok()) {
      result->result = true;
      
      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "Goal succeeded");
    } 
  }
};  // class FibonacciActionServer

}  // namespace action_tutorials_cpp

RCLCPP_COMPONENTS_REGISTER_NODE(tcom::TCommandsActionServer)