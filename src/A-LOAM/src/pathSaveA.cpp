// svaing trajcetory as tum format
// ? x y z seems not consisident with the  ground truth
#include "aloam_velodyne/common.h"
#include "aloam_velodyne/tic_toc.h"
#include <nav_msgs/Odometry.h>
#include <ros/ros.h>
#include <iostream>
#include <fstream>
#include <iterator>
#include <string.h>
#include <vector>

/* 
              << -odomAftMapped.pose.pose.position.y << " "
              << odomAftMapped.pose.pose.position.z << " "
              << odomAftMapped.pose.pose.position.x << " "
 */



void path_save(nav_msgs::Odometry odomAftMapped ){
            //string trajPath = "/home/rahil/catkin_ws/aloam_traj.txt";
            std::ofstream pose1("/home/rahil/catkin_ws/aloam_traj.txt", std::ios::app);
			pose1.setf(std::ios::scientific, std::ios::floatfield);
			pose1.precision(9);
	
			static double timeStart = odomAftMapped.header.stamp.toSec();
			auto T1 =ros::Time().fromSec(timeStart) ;
			pose1<< odomAftMapped.header.stamp - T1<< " "
              << odomAftMapped.pose.pose.position.x << " "
              << -odomAftMapped.pose.pose.position.z << " "
              << -odomAftMapped.pose.pose.position.y << " "
              << odomAftMapped.pose.pose.orientation.x << " "
              << odomAftMapped.pose.pose.orientation.y << " "
              << odomAftMapped.pose.pose.orientation.z << " "
              << odomAftMapped.pose.pose.orientation.w << std::endl;
			pose1.close();
            
}

int main(int argc, char **argv){
    ros::init(argc, argv, "path_save");
    ros::NodeHandle nh;
    ros::Subscriber save_path_aft_mapped = nh.subscribe<nav_msgs::Odometry>("/aft_mapped_to_init",     100, path_save);	    //保存轨迹，a_loam直接订阅话题/aft_mapped_to_init。
    // ros::Subscriber save_path_key_pose
    ros::spin();
     }