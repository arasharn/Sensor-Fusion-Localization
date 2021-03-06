# Extended Kalman Filter to Track a Pedestrian
---
[//]: # (Image References)
[image1]: ./Figures/Datasetobj_pose-laser-radar-synthetic-output.txt.jpg "Dataset1"

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
I used the recently changed input file provided by Udacity to check the error values on in terms of RMSE accuracies for x, y, vx, vy. I have also provided a screenshot of my terminal which I have obtained the following results in it. You can find the [screenshot here](https://github.com/SaynaEbrahimi/Udacity-Self-Driving-Car-NanoDegree-Term2-Sensor-Fusion-Localization-and-Control/blob/master/Projects/P2-Unscented-Kalman-Filter/Figures/Outputs_Screenshot.png)

### RSME values (obj_pose-laser-radar-synthetic-input.txt)
|     | RMSE      |
|-----|-----------|
| x   | 0.06035  |
| y   | 0.0840861 |
| v_x | 0.300643  |
| v_y | 0.151127  |


## Visualizing Results

### 1 - Udacity Simulator and How it Works:
Using the [open-source Udacity simulator](https://github.com/udacity/self-driving-car-sim/releases/) I made a short movie of how my code runs and works on the simulator. Here is the [youtube link](https://youtu.be/B0rHjZGUi2E).

In order to visualize the results with the simulator, first download the app using the link above and clone the repository. I used the Udacity provided python code (**kalman-tracker.py**) to interact with the simulator. To use it first run the simulator in your desired screen size and select Project 1, then open up a terminal in the repository and run **python kalman-tracker.py build/UnscentedKF**. Choose your noise measurement values (or stick to the default values) and wait for the car to move! :)


### 2 - Comparison Plot for Bicycle Motion
The python code to generate the following position plot is provided as **KalmanFilter_Visualization.ipynb** file.
It illustrates the estimated positions using the designed unscented Kalman filter versus the measurement data and ground truth values.

![alt text][image1]
