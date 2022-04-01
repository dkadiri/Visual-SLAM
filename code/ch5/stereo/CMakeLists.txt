cmake_minimum_required( VERSION 2.8 )
project( Stereo )

set( CMAKE_CXX_FLAGS "-std=c++14" )

include_directories( "/usr/include/eigen3" )

find_package( Pangolin )
include_directories( ${Pangolin_INCLUDE_DIRS} )

find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable( stereoVision stereoVision.cpp )
target_link_libraries( stereoVision ${OpenCV_LIBS} ${Pangolin_LIBRARIES})