#! /bin/bash
clear

cd /Users/sayna/Dropbox/Udacity/Term2_SDCND/Projects/P1_ExtendedKalmanFilter
mkdir build
cd build
cmake .. && make
./ExtendedKF ../data/sample-laser-radar-measurement-data-1.txt ../data/sample-laser-radar-measurement-data-1.out
./ExtendedKF ../data/sample-laser-radar-measurement-data-2.txt ../data/sample-laser-radar-measurement-data-2.out