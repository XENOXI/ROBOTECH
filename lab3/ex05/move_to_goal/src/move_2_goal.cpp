#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "turtlesim/msg/pose.hpp"
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;

template <typename Type>
std::istream& operator>>(std::istream& i, const Type& arg) { return i; }

template <typename Type>
void argpars(Type& arg, std::string&& str)
{
	std::stringstream buff;
	buff << str;
	buff >> arg;
	std::string buff2;
	buff2 = str;
	str.clear();
	std::getline(buff, str);
	if (str == buff2) //Nothing changed
		throw std::runtime_error("Not a valid argument");
}


/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class Move2Goal : public rclcpp::Node
{
public:
  Move2Goal(int argc, char * argv[])
  : Node("move_2_goal")
  {
    if (argc!=4)
    {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: move_2_goal X Y theta");
        throw std::runtime_error("usage: move_2_goal X Y theta");
    }

    argpars<float>(dt->goal.x,std::string(argv[1]));
    argpars<float>(dt->goal.y,std::string(argv[2]));
    argpars<float>(dt->goal.theta,std::string(argv[3]));

    
    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);     
    subscription_ = this->create_subscription<turtlesim::msg::Pose>(
      "turtle1/pose", 10, std::bind(&Move2Goal::update_pose, this, std::placeholders::_1));

  }

private:
  typedef struct data_t
  {
    turtlesim::msg::Pose msg;
    turtlesim::msg::Pose goal;
    bool flag=false;
  }data;
  
  std::shared_ptr<data> dt = std::make_shared<data>();


   float euclidean_distance()
  {
    return std::sqrt(std::pow(dt->goal.x - dt->msg.x,2) + std::pow(dt->goal.y-dt->msg.y,2));
  }

  float linear_vel(float constant =1)
  {
    return constant*euclidean_distance();
  }

  float steering_angle()
  {
    
    return std::atan2(dt->goal.y-dt->msg.y,dt->goal.x-dt->msg.x);
  }

  float angular_vel(float constant=4)
  {
    return constant * (steering_angle() - dt->msg.theta);
  }

  void update_pose(const turtlesim::msg::Pose& msg) { 
    dt->msg = msg;
     
    RCLCPP_INFO(get_logger(),"%f %f",linear_vel(),angular_vel());

    geometry_msgs::msg::Twist res;
    res.linear.y = 0;
    res.linear.z = 0;

    res.angular.x = 0;
    res.angular.y = 0;
    res.linear.x = linear_vel();
    res.angular.z = angular_vel();
    publisher_->publish(res);

    if (euclidean_distance()<0.1)
    {
      res.linear.x = 0;
      res.angular.z = 0;
      publisher_->publish(res);
      rclcpp::shutdown();
    }
 }

  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
  rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Move2Goal>(argc,argv));
  rclcpp::shutdown();
  return 0;
}

