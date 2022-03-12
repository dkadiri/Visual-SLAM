cmake_minimum_required( VERSION 2.8 )
project( plotTrajectory )

include_directories( "/usr/include/eigen3" )

find_package( Pangolin )
include_directories( ${Pangolin_INCLUDE_DIRS} )

add_executable( visualizeGeometry visualizeGeometry.cpp )
target_link_libraries( visualizeGeometry ${Pangolin_LIBRARIES} )

add_executable( plotTrajectory plotTrajectory.cpp )
target_link_libraries( plotTrajectory ${Pangolin_LIBRARIES} )