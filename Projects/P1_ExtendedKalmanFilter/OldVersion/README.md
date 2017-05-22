# Extended Kalman Filter to Track a Pedestrian
---
[//]: # (Image References)

[image1]: ./Dataset1.jpg "Dataset1"
[image2]: ./Dataset2.jpg "Dataset2"
[image3]: ./Velocity_Dataset1.jpg "Velocity_Dataset1"
[image4]: ./Velocity_Dataset2.jpg "Velocity_Dataset2"

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
4. Run it: `./ExtendedKF path/to/input.txt path/to/output.txt`. You can find

you can apply appropriate changes to run.sh file and execute it. appropriate changes include changing the directory to the cloned folder. run.sh file looks like below:
```bash
cd cloned_folder
mkdir build
cd build
cmake .. && make
./ExtendedKF ../data/sample-laser-radar-measurement-data-1.txt ../data/sample-laser-radar-measurement-data-1.out
./ExtendedKF ../data/sample-laser-radar-measurement-data-2.txt ../data/sample-laser-radar-measurement-data-2.out
```

## Results
There are two datasets for which I obtained the following RMSE accuracies for x, y, vx, vy:

### Dataset1 RMSE (sample-laser-radar-measurement-data-1.txt)
| x   | 0.0338739 |
|-----|-----------|
| y   | 0.0282302 |
| v_x | 0.351881  |
| v_y | 0.382045  |

### Dataset2 RMSE (sample-laser-radar-measurement-data-2.txt)
| x   | 0.181897 |
|-----|----------|
| y   | 0.17303  |
| v_x | 0.434546 |
| v_y | 0.719889 |

## Visualizing Results
The python code is provided for the following figures in **KalmanFilter_Visualization.ipynb** file.

Here are the plots for estimated positions using the designed extended Kalman filter versus the measurement data and ground truth values for both datasets.

![alt text][image1]
![alt text][image2]

Here are the plots for estimated velocities using the designed EKF versus the ground truth correspondences:

![alt text][image3]
![alt text][image4]
