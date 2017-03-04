set( INCLUDE_FILES
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/dictionary.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/IOstreams/Ostream.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Pstreams/Pstream.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/unitConversion/unitConversion.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/point/pointField.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/entry/entry.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/keyType/keyType.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/word/word.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/string/string.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/chars/char/char.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/hashes/Hasher/Hasher.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/string/stringI.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/keyType/keyTypeI.H
	${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/user/IDLList.H
)

install( FILES ${INCLUDE_FILES}
	DESTINATION ${CMAKE_INSTALL_PREFIX}/include )
