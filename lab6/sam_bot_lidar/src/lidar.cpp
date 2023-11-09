#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"


using namespace std::chrono_literals;

class MinimalPublisher : public rclcpp::Node
{
public:
	MinimalPublisher()
	: Node("minimal_publisher")
	{
		publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/bot/cmd_vel", 10);
		subscription_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
            "/bot/lidar", 10, std::bind(&MinimalPublisher::send, this, std::placeholders::_1));
	}

private:
    void send(const sensor_msgs::msg::LaserScan& msg)
    {
 
        geometry_msgs::msg::Twist res;

        res.linear.x = msg.ranges[std::ceil((msg.angle_max-msg.angle_min)/2/msg.angle_increment)]-padding;
        publisher_->publish(res);
    }
	void timer_callback()
	{
		auto message = geometry_msgs::msg::Twist();
		message.linear.set__x(rand()*2-1);
        message.angular.set__z(rand()*2-1); 
		publisher_->publish(message);
	}
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr subscription_;
    float padding = 2;
};

int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<MinimalPublisher>());
	rclcpp::shutdown();
	return 0;
}