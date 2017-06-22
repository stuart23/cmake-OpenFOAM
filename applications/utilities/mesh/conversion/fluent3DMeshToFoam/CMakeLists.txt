FLEX_TARGET(fluent3DMeshToFoam fluent3DMeshToFoam.L ${CMAKE_CURRENT_BINARY_DIR}/fluent3DMeshToFoam.L.cpp COMPILE_FLAGS ${FLEX_FLAGS})

set( EXE_NAME fluent3DMeshToFoam )

set( SOURCES

${CMAKE_CURRENT_BINARY_DIR}/fluent3DMeshToFoam.L.cpp

)

## Define the output
add_executable( ${EXE_NAME} ${SOURCES} )
install( TARGETS ${EXE_NAME} DESTINATION bin )

target_link_libraries( ${EXE_NAME} meshTools dynamicMesh OpenFOAM dl m )

