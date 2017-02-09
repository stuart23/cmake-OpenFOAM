cmake_minimum_required(VERSION 3.0)

# Project Details
set( PROJECT_NAME "cmake-OpenFOAM" VERSION 3.0 )
project( ${PROJECT_NAME} )

# Default Installation Path
set( CMAKE_INSTALL_PREFIX 
    "/usr/local/${PROJECT_NAME}-${PROJECT_VERSION}" 
    CACHE PATH "Installation location"
)
message( "Installing to ${CMAKE_INSTALL_PREFIX}")

# Determine Number of processors
include( ProcessorCount )
ProcessorCount( WM_NCOMPPROCS )
message ( "Compiling for " ${WM_NCOMPPROCS} " processor(s)" )

# Single or double precision
option( WM_PRECISION_OPTION "Set Calculation Precision. SP for single precision or DP for double precision" "DP" )

## Use all the *.cpp files we found under this folder for the project
FILE(GLOB SRCS "*.cpp" "*.c")

## Define the executable
add_executable(${PROJECT_NAME} ${SRCS})
