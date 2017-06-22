FLEX_TARGET(ansysToFoam ansysToFoam.L ${CMAKE_CURRENT_BINARY_DIR}/ansysToFoam.L.cpp COMPILE_FLAGS ${FLEX_FLAGS})

set( EXE_NAME ansysToFoam )

set( SOURCES

${CMAKE_CURRENT_BINARY_DIR}/ansysToFoam.L.cpp

)

## Define the output
add_executable( ${EXE_NAME} ${SOURCES} )
install( TARGETS ${EXE_NAME} DESTINATION bin )

target_link_libraries( ${EXE_NAME} OpenFOAM dl m )

