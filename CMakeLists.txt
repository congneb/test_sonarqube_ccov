cmake_minimum_required(VERSION 3.9)
project(sonar_scanner_example)

set(CMAKE_C_FLAGS " ${CMAKE_C_FLAGS} --coverage")
set(CMAKE_C_STANDARD 17)


include_directories(./inc)

add_executable(MyExecutable src/lib.c src/test1.c)
#add_executable(coverage_test2 src/lib.cpp src/test2.cpp)