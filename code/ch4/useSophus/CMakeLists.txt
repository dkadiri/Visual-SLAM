cmake_minimum_required( VERSION 2.8 )
project( Sophus )

include_directories( "/usr/include/eigen3" )

find_package( Sophus REQUIRED )
include_directories( ${Sophus_INCLUDE_DIRS} )

add_executable(useSophus useSophus.cpp)
target_link_libraries( useSophus Sophus::Sophus )
