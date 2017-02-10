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

FILE(GLOB_RECURSE SOURCES "*.cpp" "*.c" "*.C")
FILE(GLOB_RECURSE HEADERS "*.H")

## Define the executable
add_executable( ${PROJECT_NAME} ${SOURCES} )

set (RECURSIVE_INCLUDE_DIRS "")
foreach (_headerFile ${HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND RECURSIVE_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES RECURSIVE_INCLUDE_DIRS)
include_directories(${RECURSIVE_INCLUDE_DIRS})

target_link_libraries( ${PROJECT_NAME}  ${MPI_GCC_LIBRARIES} )