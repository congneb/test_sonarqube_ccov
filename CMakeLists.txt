cmake_minimum_required(VERSION 3.9)
project(test_build)

set(CMAKE_CXX_STANDARD 17)

include_directories(./inc ./fake_inc)
FILE(GLOB MyCSources src/*.c)
ADD_EXECUTABLE(MyExecutable ${MyCSources})

#add_executable(sonar_scanner_example src/main.c)
