cmake_minimum_required(VERSION 2.8)
project(test)

set(CMAKE_CXX_FLAGS "-std=c++11")
set(CMAKE_BUILD_TYPE "Release")
find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})


add_executable(imgproc imgproc.cpp)

target_link_libraries(imgproc ${OpenCV_LIBS})
