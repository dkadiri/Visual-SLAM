cmake_minimum_required( VERSION 2.8 )
project( RGBD )

find_package( Pangolin REQUIRED)
include_directories( ${Pangolin_INCLUDE_DIRS} )

find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

find_package(Sophus REQUIRED)
include_directories(${Sophus_INCLUDE_DIRS})


add_executable(joinMap joinMap.cpp)
target_link_libraries(joinMap ${OpenCV_LIBS} ${Pangolin_LIBRARIES} )