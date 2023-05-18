cmake_minimum_required(VERSION 3.25)
project(osn_big_lab_2_3)

set(CMAKE_CXX_STANDARD 20)

add_executable(osn_big_lab_2_3 main.cpp Engineer.h SoftwareEngineer.h)

add_executable(osn_big_lab_2_3_test test.cpp)
