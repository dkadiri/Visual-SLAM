cmake_minimum_required( VERSION 2.8 )
project( practiceGeometryEigen )

include_directories( "/usr/include/eigen3" )

add_executable( useGeometry useGeometry.cpp )