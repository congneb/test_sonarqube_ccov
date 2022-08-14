cmake_minimum_required(VERSION 3.9)
project(test_build)

set(CMAKE_CXX_FLAGS " ${CMAKE_CXX_FLAGS} --coverage")
set(CMAKE_CXX_STANDARD 17)

include_directories(./inc ./fake_inc)

#FILE(GLOB MyCSources src/*.c)
#ADD_EXECUTABLE(MyExecutable ${MyCSources})

add_executable(MyExecutable sl_i2cspm.c src/rfid_id12la.c src/ut_id12la.c)