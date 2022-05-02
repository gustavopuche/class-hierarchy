cmake_minimum_required(VERSION 3.15)
project( shapes )
# Enable C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Threads REQUIRED)
add_library( shapes shapes.cpp )
# Make sure the compiler can find include files for our Hello library
# when other libraries or executables link to Hello
target_include_directories (shapes PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
