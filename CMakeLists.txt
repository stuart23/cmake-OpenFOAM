cmake_minimum_required(VERSION 3.0)

# Project Details
set( PROJECT_NAME "cmake-OpenFOAM" VERSION 3.0 )
project( ${PROJECT_NAME} )

# Determine Number of processors
include( ProcessorCount )
ProcessorCount( NUMBER_PROCESSORS_TEMP )
set( NUMBER_PROCESSORS ${NUMBER_PROCESSORS_TEMP} CACHE STRING 
    "Number of processors to compile for")

# Single or double precision
set( WM_PRECISION_OPTION "DP" CACHE STRING 
    "Set Calculation Precision. SP for single precision or DP for double precision" )

# Auto-fill MPI settings
find_package( MPI REQUIRED )
message( "${MPI_INCLUDE_PATH}")
include_directories( ${MPI_INCLUDE_PATH} )

## Use all the *.cpp files we found under this folder for the project
FILE(GLOB_RECURSE SRCS "*.cpp" "*.c" "*.C")
message( "${SRCS}")
## Define the executable
add_executable( ${PROJECT_NAME} ${SRCS} )

target_link_libraries( ${PROJECT_NAME}  ${MPI_GCC_LIBRARIES} )