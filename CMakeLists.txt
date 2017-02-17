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

# GET RID OF ONCE CMAKE FILES WRITTEN FOR DEPENDANCIES
include_directories( /usr/include )

# Dependancies
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
# find_package( SCOTCH )
find_package( MPI REQUIRED )
find_package( FLEX REQUIRED )
find_package( ZLIB REQUIRED )
find_package( Boost REQUIRED )
find_package( METIS REQUIRED )

# Find if the metis header is specifying the same width reals (precision) as OpenFOAM settings
# Length of real is specified in the metis.h header under the REALTYPEWIDTH macro
file( STRINGS ${METIS_INCLUDE_DIR}/metis.h METIS_REALTYPEWIDTH REGEX "#define REALTYPEWIDTH" )
string( FIND ${METIS_REALTYPEWIDTH} "32" METIS_REALTYPE32 ) 
string( FIND ${METIS_REALTYPEWIDTH} "64" METIS_REALTYPE64 ) 
if( (METIS_REALTYPE64 EQUAL -1) AND DOUBLE_PRECISION )
	message( FATAL_ERROR "OpenFOAM is set to build in double precision but METIS is setup for single precision mode. Change REALTYPEWIDTH to 64 in ${METIS_INCLUDE_DIR}/metis.h" )
elseif( (METIS_REALTYPE32 EQUAL -1) AND (NOT DOUBLE_PRECISION) )
	message( FATAL_ERROR "OpenFOAM is set to build in single precision but METIS is setup for double precision mode. Change REALTYPEWIDTH to 32 in ${METIS_INCLUDE_DIR}/metis.h" )
endif()

# Auto-fill MPI settings
include_directories( ${MPI_INCLUDE_PATH} )

find_package( Inotify )
option( Inotify_ENABLED "Use iNotify Package" ${INOTIFY_FOUND} )
if( Inotify_ENABLED ) 
  add_definitions( -DFOAM_USE_INOTIFY )
endif()

# C++11
set( CMAKE_CXX_STANDARD 11 )

set( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )

add_subdirectory( src )
# add_subdirectory( applications )

