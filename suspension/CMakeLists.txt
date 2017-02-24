add_executable( suspension suspension.cpp resolveSuspension.cpp )

set( CMAKE_CXX_FLAGS "-g" )

target_link_libraries( suspension SimTKsimbody SimTKmath SimTKcommon m )

include_directories( /usr/local/include/simbody )
