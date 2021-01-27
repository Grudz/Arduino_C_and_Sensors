# Arduino C - Sensors
I programmed basic functionality for basically every sensor in the Ardunio starter kit. Everything here is written in C.

# Perception Simulation: Connect ROS with Unreal Engine 

This repository explains how to establish a communication between Unreal Engine and ROS. It also contains instructions on how to add sensors into your simulations.

**Contact:** *Sam Kysar, skysar@prattmiller.com,* *Ben Grudzien, bgrudzien@prattmiller.com*

---

# 1. Environment

If possible, use ROS Melodic with Ubuntu 18.04 on one laptop and Unreal Engine 4.23 on another laptop that's running Windows. These laptops need to be connected to eachother via ethernet cable. If you are using a different version of ROS or Unreal Engine, that's not a deal breaker, but you may run into some issues. However, I will make note on where those issues might be and how to get around them.

# 2. Directories

The directories includes various Unreal actors which publish as sensor topics to ROS.

+ [meshes](./meshes/.): Various meshes.
    - chessboard.fbx This is a chessboard that is used for simulation camera calibration.
+ [actors](./actors/.): Unreal actors which publish to ROS.
    - BaseOdom.xxx This is an actor who gets the parent actors root component and publishes an odometry message.
    - JointPublisher.xxx This actor publishes joint information of the parent actor. Currently is only looking at wheel locations of a wheeled actor to get the wheel position. Can readily be modified to whatever the parent actor is.
    - LiDAR.xxx Simulates a LiDAR by performing a line trace from the root out to the defined world coordinate. There will be multiple LiDAR models available by selecting in the sensor dropdown.
    - StereoCamera.xxx Simulates a stereo camera by publishing two image topics. No disparity or depth yet... hopefully soon.

# 3. Install Dependencies

We are going to refer to the [ROSIntegration Plugin](https://github.com/code-iai/ROSIntegration) to set this up. However, lets ignore some of their instructions and set it up our own way.

+ **Step 1: Create a ROS Workspace**
    - Do this on your Ubuntu laptop. This is easy and doesn't require much explanation. Just make sure after you set up your [ROS workspace](http://wiki.ros.org/catkin/Tutorials/create_a_workspace), you source it in your [.bashrc file.](http://wiki.ros.org/ROS/Tutorials/InstallingandConfiguringROSEnvironment) 
    
+ **Step 2: Install**
    - Still on your Ubuntu laptop, open a new terminal and navigate to the "src" folder of your ROS workspace.
```
$ roscd
$ cd .. && cd src
```
  
   - Additionally, the first line in the script must indicate which program it should use to run the file, like so:

```bash
#!/bin/bash
echo "Hello, world!"
```

Or if you prefer to use `sh` instead of `bash`, change `#!/bin/bash` to `#!/bin/sh`. This `#!` character sequence is known as the [shebang](http://en.wikipedia.org/wiki/Shebang_%28Unix%29). Now you can run the script like this:    

https://github.com/code-iai/ROSIntegration


