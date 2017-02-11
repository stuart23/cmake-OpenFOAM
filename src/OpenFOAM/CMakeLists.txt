FILE(GLOB_RECURSE HEADERS "*.H")

set( SOURCES
global/global.Cver
# global/constants/constants.C in global.Cver
# global/constants/dimensionedConstants.C in global.Cver
global/argList/argList.C
global/clock/clock.C
)

## Define the executable
add_executable( OpenFOAM ${SOURCES} )

set (RECURSIVE_INCLUDE_DIRS "")
foreach (_headerFile ${HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND RECURSIVE_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES RECURSIVE_INCLUDE_DIRS)
include_directories(${RECURSIVE_INCLUDE_DIRS})

