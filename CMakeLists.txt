cmake_minimum_required(VERSION 3.30.3)

# Set project name variable
set(projectName Virtual_Memory_System)

# Set project name
project(${projectName} LANGUAGES C CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Add subdirectories
add_subdirectory(src)
