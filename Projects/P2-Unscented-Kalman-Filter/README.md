# Extended Kalman Filter to Track a Pedestrian
---
[//]: # (Image References)
[image1]: ./Figures/Datasetobj_pose-laser-radar-synthetic-output.txt.jpg "Dataset1"
[image2]: ./Figures/Datasetsample-laser-radar-measurement-data-1-output.txt.jpg "Dataset2"
[image3]: ./Figures/Datasetsample-laser-radar-measurement-data-2-output.txt.jpg "Dataset3"
[image4]: ./Figures/Velocity_Datasetobj_pose-laser-radar-synthetic-output.txt.jpg "Velocity_Dataset1"
[image5]: ./Figures/Velocity_Datasetsample-laser-radar-measurement-data-1-output.txt.jpg "Velocity_Dataset2"
[image6]: ./Figures/Velocity_Datasetsample-laser-radar-measurement-data-2-output.txt.jpg "Velocity_Dataset3"

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./ExtendedKF path/to/input.txt path/to/output.txt`.

you can apply appropriate changes to run.sh file and execute it. appropriate changes include changing the directory to the cloned folder. run.sh file looks like below:
```bash
cd cloned_folder
mkdir build && cd build
cmake .. && make
./ExtendedKF ../data/obj_pose-laser-radar-synthetic-input.txt ../data/obj_pose-laser-radar-synthetic-output.txt
./ExtendedKF ../data/sample-laser-radar-measurement-data-1.txt ../data/sample-laser-radar-measurement-data-1-output.txt
./ExtendedKF ../data/sample-laser-radar-measurement-data-2.txt ../data/sample-laser-radar-measurement-data-2-output.txt
```

## Results
I used three files provided by Udacity to check the error values on in terms of RMSE accuracies for x, y, vx, vy. I have also provided a screenshot of my terminal which I have obtained the following results in it. You can find the [screenshot here](https://github.com/SaynaEbrahimi/Udacity-Self-Driving-Car-NanoDegree-Term2-Sensor-Fusion-Localization-and-Control/blob/master/Projects/P1_ExtendedKalmanFilter/Figures/Outputs_Screenshot.png).

### Dataset1 RMSE (obj_pose-laser-radar-synthetic-input.txt)
| x   |   0.0972256|
|-----|-----------|
| y   |   0.0853761|
| v_x |   0.450855|
| v_y |   0.439588|


### Dataset1 RMSE (sample-laser-radar-measurement-data-1.txt)
| x   | 0.06516   |
|-----|-----------|
| y   | 0.06054   |
| v_x | 0.54319   |
| v_y | 0.54419   |

### Dataset2 RMSE (sample-laser-radar-measurement-data-2.txt)
| x   | 0.185496|
|-----|----------|
| y   | 0.190302|
| v_x | 0.476754 |
| v_y | 0.804469 |

## Visualizing Results


### 1 - Udacity Simulator and How it Works:
Using the [open-source Udacity simulator](https://github.com/udacity/self-driving-car-sim/releases/) I made a short movie of how my code runs and works on the simulator. Here is the [youtube link](https://youtu.be/ZeU0wolYa1U).

In order to visualize the results with the simulator, first download the app using the link above and clone the repository. I used the Udacity provided python code (**kalman-tracker.py**) to interact with the simulator. To use it first run the simulator in your desired screen size and select Project 1, then open up a terminal in the repository and run **python kalman-tracker.py build/ExtendedKF**. Choose the dataset (1 or 2) and wait for the car to start tracking! :)


### 2 - Plots for Pedestrian Motion
The python code is provided for the following figures in **KalmanFilter_Visualization.ipynb** file.
Here are the plots for estimated positions using the designed extended Kalman filter versus the measurement data and ground truth values for all three datasets.

![alt text][image1]
![alt text][image2]
![alt text][image3]

Here are the plots for estimated velocities using the designed EKF versus the ground truth correspondences:

![alt text][image4]
![alt text][image5]
![alt text][image6]
