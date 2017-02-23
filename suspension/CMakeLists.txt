add_executable( suspension suspension.cpp )

target_link_libraries( suspension SimTKsimbody SimTKmath SimTKcommon m )

include_directories( /usr/local/include/simbody )
