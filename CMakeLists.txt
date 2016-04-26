cmake_minimum_required(VERSION 3.5)
project(OnlineJudge)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES HUSTOJ/1027.cpp)

add_executable(OnlineJudge ${SOURCE_FILES})