cmake_minimum_required(VERSION 3.0)

# Project Details
set( PROJECT_NAME "cmake-OpenFOAM" VERSION 3.0 )
project( ${PROJECT_NAME} )

include( ProcessorCount )
ProcessorCount( NUMBER_PROCESSORS_TEMP )
set( NUMBER_PROCESSORS ${NUMBER_PROCESSORS_TEMP} CACHE STRING 
    "Number of processors to compile for")

option( DOUBLE_PRECISION  "Double Precision Calculations" ON )
if( DOUBLE_PRECISION )
  add_definitions( -DOF_DOUBLE_PRECISION )
else()
  add_definitions( -DOF_SINGLE_PRECISION )
endif()

option( NO_REPOSITORY "UNKNOWN OPTION. LEAVE ENABLED FOR NOW" ON )
if( NO_REPOSITORY )
  add_definitions( -DNoRepository )
endif()

set( CMAKE_CXX_FLAGS "-Wall -Wextra -Wold-style-cast -Wnon-virtual-dtor -Wno-unused-parameter -Wno-invalid-offsetof -O3 -ftemplate-depth-100" )

set( LABEL_SIZE 64 )
add_definitions( -DLABEL_SIZE=${LABEL_SIZE} )

# Auto-fill MPI settings
find_package( MPI REQUIRED )
include_directories( ${MPI_INCLUDE_PATH} )

# Dependancies
find_package( FLEX REQUIRED )
find_package( ZLIB REQUIRED )

# C++11
set( CMAKE_CXX_STANDARD 11 )

add_subdirectory( wmake/src )
add_subdirectory( src )

add_executable( ${PROJECT_NAME} main.cpp )

target_link_libraries( ${PROJECT_NAME}  ${MPI_GCC_LIBRARIES} )
