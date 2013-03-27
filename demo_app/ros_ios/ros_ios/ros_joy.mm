//
//  ros_joy.mm
//  ros_ios
//
//  Created by Ronan Chauvin on 2013-02-13.
//  Copyright (c) 2013 Ronan Chauvin. All rights reserved.
//

#import "ros_joy.h"
#import <ros/time.h>
#import <geometry_msgs/Twist.h>

RosJoy::RosJoy()
{
    pub_ = n_.advertise<geometry_msgs::Twist>(/*"/az3/base_controller/cmd_vel"*/"/base_controller/command", 1);
    
    ros_thread_ = new boost::thread(&RosJoy::ros_spin, this);
}

RosJoy::~RosJoy()
{
    ros::shutdown();
    ros_thread_->join();
    delete ros_thread_;
}

void RosJoy::ros_spin()
{
    ros::spin();
}

void RosJoy::sendCmds(double lin_x, double lin_y, double ang_z)
{
    geometry_msgs::Twist cmd;
    
    cmd.linear.x = lin_x;
    cmd.linear.y = lin_y;
    cmd.angular.z = ang_z;
    
    pub_.publish(cmd);
}