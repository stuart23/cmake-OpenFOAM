FLEX_TARGET(STLsurfaceFormatASCII surfaceFormats/stl/STLsurfaceFormatASCII.L ${CMAKE_CURRENT_BINARY_DIR}/STLsurfaceFormatASCII.L.cpp COMPILE_FLAGS ${FLEX_FLAGS})

set( SOURCES

surfZone/surfZone/surfZone.C
surfZone/surfZone/surfZoneIOList.C
surfZone/surfZoneIdentifier/surfZoneIdentifier.C

MeshedSurfaceAllocator/MeshedSurfaceIOAllocator.C

MeshedSurface/MeshedSurfaceCore.C
MeshedSurface/MeshedSurfaces.C
UnsortedMeshedSurface/UnsortedMeshedSurfaces.C

MeshedSurfaceProxy/MeshedSurfaceProxyCore.C

surfaceRegistry/surfaceRegistry.C
surfMesh/surfMesh.C
surfMesh/surfMeshClear.C
surfMesh/surfMeshIO.C
surfFields/surfFields/surfFields.C
surfFields/surfPointFields/surfPointFields.C

surfaceFormats/surfaceFormatsCore.C

surfaceFormats/ac3d/AC3DsurfaceFormatCore.C
surfaceFormats/ac3d/AC3DsurfaceFormatRunTime.C
surfaceFormats/gts/GTSsurfaceFormatRunTime.C
surfaceFormats/nas/NASsurfaceFormatRunTime.C
surfaceFormats/obj/OBJsurfaceFormatRunTime.C
surfaceFormats/obj/OBJstream.C
surfaceFormats/off/OFFsurfaceFormatRunTime.C
surfaceFormats/ofs/OFSsurfaceFormatCore.C
surfaceFormats/ofs/OFSsurfaceFormatRunTime.C
surfaceFormats/smesh/SMESHsurfaceFormatRunTime.C
surfaceFormats/starcd/STARCDsurfaceFormatCore.C
surfaceFormats/starcd/STARCDsurfaceFormatRunTime.C
surfaceFormats/stl/STLsurfaceFormatCore.C
surfaceFormats/stl/STLsurfaceFormatRunTime.C
${CMAKE_CURRENT_BINARY_DIR}/STLsurfaceFormatASCII.L.cpp
surfaceFormats/tri/TRIsurfaceFormatCore.C
surfaceFormats/tri/TRIsurfaceFormatRunTime.C
surfaceFormats/vtk/VTKsurfaceFormatCore.C
surfaceFormats/vtk/VTKsurfaceFormatRunTime.C
surfaceFormats/wrl/WRLsurfaceFormatCore.C
surfaceFormats/wrl/WRLsurfaceFormatRunTime.C
surfaceFormats/x3d/X3DsurfaceFormatCore.C
surfaceFormats/x3d/X3DsurfaceFormatRunTime.C

)

## Define the output
add_library( surfMesh SHARED ${SOURCES} )
install( TARGETS surfMesh DESTINATION lib )

target_link_libraries( surfMesh fileFormats )

include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX )
include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX/cpuTime )
include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX/signals )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/HashSet )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/HashTable )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/Map )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Identifiers/Keyed )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/ILList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/LList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/LPtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/UILList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/linkTypes/DLListBase )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/linkTypes/SLListBase )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/user )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/BiIndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/DynamicList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/FixedList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/IndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/List )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/ListListOps )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/ListOps )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/PackedList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/PtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UPtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/SortableList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/SubList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UIndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/NamedEnum )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/CompactIOList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/IOField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/IOList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/IOdictionary )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Fstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/IOstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Pstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Sstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/StringStreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Tstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/gzstream )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/token )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/Time )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/Time/instant )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/entry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/primitiveEntry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dynamicLibrary/dlLibraryTable )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/error )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/functionObjects/functionObject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/functionObjects/functionObjectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/objectRegistry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/regIOobject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/runTimeSelection/construction )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/runTimeSelection/memberFunctions )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/typeInfo )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionSet )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedScalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedType )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedScalarField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/Field )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/diagTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/labelField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/scalarField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/sphericalTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/symmTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/tensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/transformField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/transformList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/vectorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/clock )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/constants/mathematical )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/debug )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/include )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/DiagonalMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/Matrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/RectangularMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/SquareMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/SymmetricSquareMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduSchedule )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/scalarMatrices )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/Xfer )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/autoPtr )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/refCount )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/tmp )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/GeoMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/Identifiers/patch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/ProcessorTopology )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/bandCompression )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/boundBox )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cell )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cellModel )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cellModeller )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cellShape )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/edge )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/face )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/triFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/globalMeshData )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/mapPolyMesh/mapDistribute )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyBoundaryMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/processor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/polyPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/ZoneMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/cellZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/faceZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/pointZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/zone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh/PatchTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh/PrimitivePatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh/primitivePatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/line )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/objectHit )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/point )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/point2D )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/triangle )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/DiagTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/DiagTensor/diagTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Pair )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/doubleScalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/floatScalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/scalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SphericalTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SphericalTensor/sphericalTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Swap )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SymmTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SymmTensor/symmTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Tensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Tensor/tensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Vector )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Vector/vector )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Vector2D )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Vector2D/vector2D )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/VectorSpace )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/bools/Switch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/bools/bool )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/bools/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/chars/char )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/contiguous )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/direction )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/globalIndexAndTransform )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/globalIndexAndTransform/vectorTensorTransform )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/hashes/Hash )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/hashes/Hasher )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/hashes/SHA1 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int32 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int64 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/label )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uLabel )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint32 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint64 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/nil )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/nullObject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ops )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/pTraits )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/quaternion )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/random/Random )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/random/cachedRandom )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/septernion )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/fileName )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/keyType )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/string )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/word )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/wordRe )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/transform )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/triad )
include_directories( ${CMAKE_SOURCE_DIR}/src/fileFormats/nas )
include_directories( ${CMAKE_SOURCE_DIR}/src/fileFormats/starcd )
include_directories( ${CMAKE_SOURCE_DIR}/src/fileFormats/vtk )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/MeshedSurface )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/MeshedSurfaceAllocator )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/MeshedSurfaceProxy )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/UnsortedMeshedSurface )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfFields/surfFields )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfFields/surfPointFields )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfZone/surfZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfZone/surfZoneIdentifier )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/ac3d )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/ftr )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/gts )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/nas )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/obj )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/off )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/ofs )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/smesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/starcd )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/stl )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/tri )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/vtk )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/wrl )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/x3d )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceRegistry )

