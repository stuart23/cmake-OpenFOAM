set( INCLUDE_FILES
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/dictionary.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/IOstreams/Ostream.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Pstreams/Pstream.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/unitConversion/unitConversion.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/point/pointField.H
)

install( FILES ${INCLUDE_FILES}
	DESTINATION ${CMAKE_INSTALL_PREFIX}/include )
