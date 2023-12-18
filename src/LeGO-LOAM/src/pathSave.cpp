// svaing trajcetory as tum format
// ? x y z seems not consisident with the  ground truth
#include "utility.h"
/* 
              << -odomAftMapped.pose.pose.position.y << " "
              << odomAftMapped.pose.pose.position.z << " "
              << odomAftMapped.pose.pose.position.x << " "
 */



void path_save(nav_msgs::Odometry odomAftMapped ){
 
   			std::ofstream pose1(trajPath, std::ios::app);
			pose1.setf(std::ios::scientific, std::ios::floatfield);
			pose1.precision(9);
	
			static double timeStart = odomAftMapped.header.stamp.toSec();
			//auto T1 =ros::Time().fromSec(timeStart) ;
			pose1<< odomAftMapped.header.stamp<< " "
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