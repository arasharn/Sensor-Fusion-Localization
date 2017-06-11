# CarND-Controls-PID

Implementing a PID Controller in C++ to drive a vehicle in a simulator environment!
---

In this project we go back to the same environment that we used in the Behavioral Cloning Project in Term 1. This time, however, we finish the driving task using a PID controller! The steering angle is what we compute as the command of action using the cross track error (CTE) and the velocity (mph) reported by the simulator.

The simulator has been open-sourced by Udacity and can be downloaded [here](https://github.com/udacity/self-driving-car-sim/releases)

Describe the effect each of the P, I, D components had in your implementation.

Finding kp, ki, kd components in a heuristic way is a research field in control theory. The right way to do it is using root locus analysis and modeling the transfer function behavior. Here, however, I manually tweaked them to get desired maneuver on the track.
Here are the final values I peaked:

Kp = 0.2

Ki = 1e-4

Kd = 10.0

Kd takes the derivative of the error so choosing a large value for it would make the difference between the error in two consecutive time-steps too large so car starts wiggling around.

Ki takes the integral of the error so making it large, would cause the car to take more time to get back on track.

For tuning Kp, I started from 0.01 and increased it by 0.01 until I reached 0.2. A wrong Kp value would car to zig-zag until it blows up. At too small values, it takes longer to blow up.

Here is [a video of my implementation](https://youtu.be/utynFMySkL4) of how the car successfully passed the track without going to anywhere considered as unsafe!


---
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
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`.
