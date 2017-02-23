add_executable( suspension suspension.cpp )

target_link_libraries( SimTKsimbody SimTKmath SimTKcommon m )

include_directories( /usr/local/include/simbody )
