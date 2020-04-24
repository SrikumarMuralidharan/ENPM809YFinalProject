cmake_minimum_required(VERSION 3.16)
project(RWA3_Group2)

set(CMAKE_CXX_STANDARD 14)

add_executable(RWA3_Group2 main.cpp LandBasedRobot/landbasedrobot.cpp LandBasedRobot/landbasedrobot.h LandBasedTracked/landbasedtracked.cpp LandBasedTracked/landbasedtracked.h LandBasedWheeled/landbasedwheeled.cpp LandBasedWheeled/landbasedwheeled.h)