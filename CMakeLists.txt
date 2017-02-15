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

set( CMAKE_CXX_FLAGS "-Wall -Wextra -Wold-style-cast -Wnon-virtual-dtor -Wno-unused-parameter -Wno-invalid-offsetof -O3 -ftemplate-depth-100 -DOMPI_SKIP_MPICXX" )

set( LABEL_SIZE 32 )
add_definitions( -DLABEL_SIZE=${LABEL_SIZE} )

find_package( SCOTCH )
set( SCOTCH_VERSION "scotch_6.0.3" )
set( SCOTCH_ARCH_PATH "$WM_THIRD_PARTY_DIR/platforms/$WM_ARCH$WM_COMPILER$WM_LABEL_OPTION/$SCOTCH_VERSION" )

include_directories( /usr/include )

# Auto-fill MPI settings
find_package( MPI REQUIRED )
include_directories( ${MPI_INCLUDE_PATH} )

# Dependancies
find_package( FLEX REQUIRED )
find_package( ZLIB REQUIRED )
find_package( Boost REQUIRED )

find_package( METIS )
find_package( Inotify )
option( INOTIFY_ENABLED "Use iNotify Package" ${INOTIFY_FOUND} )
if( INOTIFY_ENABLED ) 
  add_definitions( -DFOAM_USE_INOTIFY )
endif()
set( INOTIFY_INCLUDE_DIR ${INOTIFY_INCLUDE_DIR} ) 

# C++11
set( CMAKE_CXX_STANDARD 11 )

add_subdirectory( wmake/src )
add_subdirectory( src )

