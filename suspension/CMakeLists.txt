add_library( suspensionKinematics SHARED suspensionKinematics.cpp )

add_executable( suspension resolveSuspension.cpp )

target_link_libraries( suspension suspensionKinematics SimTKsimbody SimTKmath SimTKcommon m )

include_directories( /usr/local/include/simbody )
