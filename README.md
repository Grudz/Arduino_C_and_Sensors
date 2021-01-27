# Arduino C - Sensors
I programmed basic functionality for basically every sensor in the Ardunio starter kit. Everything here is written in C.

# Perception Simulation: ROSBridge and Sensors with Unreal Engine

This repository explains how to establish a connection between Unreal Engine 4 and ROS. It also contains instructions on how to add sensors into your simulation.

**Contact:** *Sam Kysar, skysar@prattmiller.com,* *Ben Grudzien, bgrudzien@prattmiller.com*

---

# 1. Environment

If possible, use ROS Melodic with Ubuntu 18.04 on one laptop and Unreal Engine 4.23 on another laptop that's running Windows. These laptops need to be connected to eachother via ethernet. If you are using a different version of ROS or Unreal Engine, that's not a deal breaker, but you may run into some issues. However, I will make note on where those issues might be and how to get around them.

# 2. Directories

The directories includes various Unreal actors which publish as sensor topics to ROS.

+ [meshes](./meshes/.): Various meshes.
    - chessboard.fbx This is a chessboard that is used for simulation camera calibration.
+ [actors](./actors/.): Unreal actors which publish to ROS.
    - BaseOdom.xxx This is an actor who gets the parent actors root component and publishes an odometry message.
    - JointPublisher.xxx This actor publishes joint information of the parent actor. Currently is only looking at wheel locations of a wheeled actor to get the wheel position. Can readily be modified to whatever the parent actor is.
    - LiDAR.xxx Simulates a LiDAR by performing a line trace from the root out to the defined world coordinate. There will be multiple LiDAR models available by selecting in the sensor dropdown.
    - StereoCamera.xxx Simulates a stereo camera by publishing two image topics. No disparity or depth yet... hopefully soon.

https://github.com/code-iai/ROSIntegration


