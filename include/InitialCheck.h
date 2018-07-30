/** @file InitialCheck.h
 *  @brief Class definition for Initial Check
 *  @author Ashwini Magar, Jack Shelata, Alessandro Piscioneri
 *  @date May 28, 2018
 */
#ifndef __INITIAL_CHECK_H__
#define __INITIAL_CHECK_H__

#include <ros/ros.h>
#include "edo_core_msgs/MachineState.h"
#include <iostream>

/***************************************************************
**                Class(es) Definition
****************************************************************/

class InitialCheck {
  
public:

	InitialCheck(ros::NodeHandle& nh_in);

	void stateCallback(const edo_core_msgs::MachineState& state);

	int getState();

	bool getStateReceived();

private:

	ros::NodeHandle nh;                     // 
	ros::Subscriber machine_state_sub;      // 
	int machine_state;                      // 
	bool stateReceived;                     // 
	
};


#endif