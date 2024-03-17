cmake_minimum_required(VERSION 3.26)
project(laba3)

set(CMAKE_CXX_STANDARD 17)

add_executable(laba3 main.cpp
        Player.cpp
        Player.h
        Parking.cpp
        Parking.h
        ParkingLot.cpp
        ParkingLot.h)
