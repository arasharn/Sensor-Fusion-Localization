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

* cmake >= v3.5
* make >= v4.1
* gcc/g++ >= v5.4

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./UnscentedKF path/to/input.txt path/to/output.txt`. You can find
   some sample inputs in 'data/'.
    - eg. `./UnscentedKF ../data/obj_pose-laser-radar-synthetic-input.txt`

## Results
I used three files provided by Udacity to check the error values on in terms of RMSE accuracies for x, y, vx, vy. I have also provided a screenshot of my terminal which I have obtained the following results in it. You can find the [screenshot here]()

### Dataset1 RMSE (obj_pose-laser-radar-synthetic-input.txt)
| x   |   |
|-----|-----------|
| y   |   |
| v_x |   |
| v_y |   |


### Dataset1 RMSE (sample-laser-radar-measurement-data-1.txt)
| x   |    |
|-----|-----------|
| y   |    |
| v_x |    |
| v_y |    |

### Dataset2 RMSE (sample-laser-radar-measurement-data-2.txt)
| x   | |
|-----|----------|
| y   | |
| v_x |  |
| v_y |  |

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
