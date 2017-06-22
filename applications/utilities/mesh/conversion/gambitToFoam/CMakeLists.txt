FLEX_TARGET(gambitToFoam gambitToFoam.L ${CMAKE_CURRENT_BINARY_DIR}/gambitToFoam.L.cpp COMPILE_FLAGS ${FLEX_FLAGS})

set( EXE_NAME gambitToFoam )

set( SOURCES

${CMAKE_CURRENT_BINARY_DIR}/gambitToFoam.L.cpp

)

## Define the output
add_executable( ${EXE_NAME} ${SOURCES} )
install( TARGETS ${EXE_NAME} DESTINATION bin )

target_link_libraries( ${EXE_NAME} OpenFOAM dl m )

