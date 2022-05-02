cmake_minimum_required(VERSION 3.15)
project( demo )
# Enable C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(${CMAKE_SOURCE_DIR}/..)
link_directories(${CMAKE_SOURCE_DIR}/..)
add_executable( demo demo.cpp )
add_custom_target(run)
target_link_libraries (demo LINK_PUBLIC shapes)
add_custom_command( TARGET run
	POST_BUILD COMMAND ./demo)
