cmake_minimum_required(VERSION 2.8)

# Project Name
set( PROJECT_NAME "cmake-OpenFOAM" )
project(${PROJECT_NAME})


## Use all the *.cpp files we found under this folder for the project
FILE(GLOB SRCS "*.cpp" "*.c")

## Define the executable
add_executable(${PROJECT_NAME} ${SRCS})
