set( SOURCES

attachDetach/attachDetach.C
attachDetach/attachInterface.C
attachDetach/detachInterface.C
attachDetach/attachDetachPointMatchMap.C

layerAdditionRemoval/layerAdditionRemoval.C
layerAdditionRemoval/setLayerPairing.C
layerAdditionRemoval/addCellLayer.C
layerAdditionRemoval/removeCellLayer.C

slidingInterface/enrichedPatch/enrichedPatch.C
slidingInterface/enrichedPatch/enrichedPatchPointMap.C
slidingInterface/enrichedPatch/enrichedPatchFaces.C
slidingInterface/enrichedPatch/enrichedPatchPointPoints.C
slidingInterface/enrichedPatch/enrichedPatchCutFaces.C
slidingInterface/enrichedPatch/enrichedPatchMasterPoints.C

polyTopoChange/polyMeshModifier/polyMeshModifier.C
polyTopoChange/polyMeshModifier/polyMeshModifierNew.C

polyTopoChange/polyTopoChange/topoAction/topoActions.C
polyTopoChange/polyTopoChanger/polyTopoChanger.C
polyTopoChange/polyTopoChange/polyTopoChange.C
polyTopoChange/polyTopoChange/addPatchCellLayer.C
polyTopoChange/polyTopoChange/pointEdgeCollapse/pointEdgeCollapse.C
polyTopoChange/polyTopoChange/edgeCollapser.C
polyTopoChange/polyTopoChange/faceCollapser.C
polyTopoChange/polyTopoChange/hexRef8.C
polyTopoChange/polyTopoChange/removeCells.C
polyTopoChange/polyTopoChange/removeFaces.C
polyTopoChange/polyTopoChange/refinementData.C
polyTopoChange/polyTopoChange/refinementDistanceData.C
polyTopoChange/polyTopoChange/refinementHistory.C
polyTopoChange/polyTopoChange/removePoints.C
polyTopoChange/polyTopoChange/combineFaces.C
polyTopoChange/polyTopoChange/duplicatePoints.C
polyTopoChange/polyTopoChange/tetDecomposer.C

slidingInterface/slidingInterface.C
slidingInterface/slidingInterfaceProjectPoints.C
slidingInterface/coupleSlidingInterface.C
slidingInterface/slidingInterfaceAttachedAddressing.C
slidingInterface/slidingInterfaceClearCouple.C
slidingInterface/decoupleSlidingInterface.C

perfectInterface/perfectInterface.C

boundaryMesh/boundaryMesh.C
boundaryPatch/boundaryPatch.C
setUpdater/setUpdater.C

meshCut/meshModifiers/boundaryCutter/boundaryCutter.C
meshCut/meshModifiers/meshCutter/meshCutter.C
meshCut/meshModifiers/meshCutAndRemove/meshCutAndRemove.C
meshCut/meshModifiers/undoableMeshCutter/undoableMeshCutter.C
meshCut/meshModifiers/refinementIterator/refinementIterator.C
meshCut/meshModifiers/multiDirRefinement/multiDirRefinement.C

meshCut/cellLooper/cellLooper.C
meshCut/cellLooper/topoCellLooper.C
meshCut/cellLooper/geomCellLooper.C
meshCut/cellLooper/hexCellLooper.C
meshCut/directions/directions.C
meshCut/directions/directionInfo/directionInfo.C
meshCut/edgeVertex/edgeVertex.C
meshCut/cellCuts/cellCuts.C
meshCut/splitCell/splitCell.C
meshCut/refineCell/refineCell.C
meshCut/wallLayerCells/wallLayerCells.C
meshCut/wallLayerCells/wallNormalInfo/wallNormalInfo.C

polyTopoChange/attachPolyTopoChanger/attachPolyTopoChanger.C
polyTopoChange/repatchPolyTopoChanger/repatchPolyTopoChanger.C

fvMeshAdder/fvMeshAdder.C
fvMeshDistribute/fvMeshDistribute.C
polyMeshAdder/faceCoupleInfo.C
polyMeshAdder/polyMeshAdder.C

fvMeshTools/fvMeshTools.C

motionSmoother/motionSmoother.C
motionSmoother/motionSmootherAlgo.C
motionSmoother/motionSmootherAlgoCheck.C
motionSmoother/motionSmootherData.C
motionSmoother/polyMeshGeometry/polyMeshGeometry.C
motionSmoother/badQualityToCell/badQualityToCell.C
motionSmoother/badQualityToFace/badQualityToFace.C

motionSolver/motionSolver/motionSolver.C
motionSolver/displacement/displacementMotionSolver.C
motionSolver/componentDisplacement/componentDisplacementMotionSolver.C
motionSolver/velocity/velocityMotionSolver.C
motionSolver/componentVelocity/componentVelocityMotionSolver.C

createShellMesh/createShellMesh.C

extrudePatchMesh/extrudePatchMesh.C

polyMeshFilter/polyMeshFilterSettings.C
polyMeshFilter/polyMeshFilter.C

)

## Define the output
add_library( dynamicMesh SHARED ${SOURCES} )

target_link_libraries( dynamicMesh finiteVolume triSurface extrudeModel )

include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX )
include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX/cpuTime )
include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX/memInfo )
include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX/signals )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/algorithms/indexedOctree )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/HashPtrTable )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/HashSet )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/HashTable )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/Map )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/ILList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/LList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/LPtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/UILList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/linkTypes/DLListBase )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/linkTypes/SLListBase )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/user )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/BiIndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/CompactListList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/DynamicList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/FixedList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/IndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/List )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/ListListOps )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/ListOps )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/PackedList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/PtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/SortableList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/SubList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UIndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UPtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/NamedEnum )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjectList )
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
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/typeInfo )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionSet )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedScalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedSphericalTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedSymmTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedType )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedVector )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedScalarField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedSphericalTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedSymmTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/FieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/scalarFieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/sphericalTensorFieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/symmTensorFieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/tensorFieldField )
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
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricScalarField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricSphericalTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricSymmTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/pointFields )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/UniformDimensionedFields )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/basic/calculated )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/basic/fixedValue )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/basic/value )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/constraint/empty )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/constraint/processor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/pointPatchField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/pointPatchField/pointConstraint )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/clock )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/constants/mathematical )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/debug )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/unitConversion )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/include )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/DiagonalMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/LduMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/LduMatrix/LduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/Matrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/RectangularMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/SquareMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/SymmetricSquareMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterface )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterfaceFields/lduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterfaceFields/processorLduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduSchedule )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/scalarMatrices )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/solution )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/Xfer )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/autoPtr )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/refCount )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/tmp )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/GeoMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/Identifiers/DynamicID )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/Identifiers/patch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/Identifiers/zones )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/MeshObject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/ProcessorTopology )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/bandCompression )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/boundBox )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/data )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/lduMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cell )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cellMatcher )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cellModel )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cellModeller )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cellShape )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/edge )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/face )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/triFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointBoundaryMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointPatches/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointPatches/constraint/empty )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointPatches/constraint/processor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointPatches/derived/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointPatches/facePointPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointPatches/pointPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/globalMeshData )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/mapPolyMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/mapPolyMesh/mapDistribute )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/mapPolyMesh/objectMap )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyBoundaryMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyMeshTetDecomposition )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/cyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/empty )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/processor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/processorCyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/wedge )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/derived/wall )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/polyPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/syncTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/ZoneMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/cellZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/faceZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/pointZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/zone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh/PatchTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh/PrimitivePatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh/primitiveMeshCheck )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh/primitivePatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/line )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/objectHit )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/plane )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/point )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/point2D )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/pyramid )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/tetrahedron )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/triangle )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/treeBoundBox )
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
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Tuple2 )
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
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/attachDetach )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/boundaryMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/boundaryPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/createShellMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/extrudePatchMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/fvMeshAdder )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/fvMeshDistribute )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/fvMeshTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/layerAdditionRemoval )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/cellCuts )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/cellLooper )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/directions )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/directions/directionInfo )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/edgeVertex )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/meshModifiers/boundaryCutter )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/meshModifiers/meshCutAndRemove )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/meshModifiers/meshCutter )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/meshModifiers/multiDirRefinement )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/meshModifiers/refinementIterator )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/meshModifiers/undoableMeshCutter )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/refineCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/splitCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/wallLayerCells )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/meshCut/wallLayerCells/wallNormalInfo )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/motionSmoother )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/motionSmoother/badQualityToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/motionSmoother/badQualityToFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/motionSmoother/polyMeshGeometry )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/motionSolver/componentDisplacement )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/motionSolver/componentVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/motionSolver/displacement )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/motionSolver/motionSolver )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/motionSolver/velocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/perfectInterface )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/polyMeshAdder )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/polyMeshFilter )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/polyTopoChange/attachPolyTopoChanger )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/polyTopoChange/polyMeshModifier )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/polyTopoChange/polyTopoChange )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/polyTopoChange/polyTopoChange/addObject )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/polyTopoChange/polyTopoChange/modifyObject )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/polyTopoChange/polyTopoChange/pointEdgeCollapse )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/polyTopoChange/polyTopoChange/removeObject )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/polyTopoChange/polyTopoChange/topoAction )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/polyTopoChange/polyTopoChanger )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/polyTopoChange/repatchPolyTopoChanger )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/setUpdater )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/slidingInterface )
include_directories( ${CMAKE_SOURCE_DIR}/src/dynamicMesh/slidingInterface/enrichedPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/basic/calculated )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/empty )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/processor )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/processorCyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/fvPatchField )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/basic/calculated )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/constraint/empty )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/constraint/processor )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/fvsPatchField )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/surfaceFields )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/volFields )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/fvSchemes )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/fvSolution )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvBoundaryMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvMeshSubset )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/constraint/empty )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/constraint/processor )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/constraint/processorCyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/fvPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/surfaceInterpolation )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/volPointInterpolation )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/surfaceMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/volMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/mesh/extrudeModel/extrudeModel )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/AMIInterpolation )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/AMIInterpolation/AMIMethod/AMIMethod )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/faceAreaIntersect )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/patches/cyclicAMI/cyclicAMIPolyPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/algorithms/MeshWave )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/algorithms/PointEdgeWave )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/cellFeatures )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/indexedOctree )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/meshTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/regionSplit )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/searchableSurface )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/topoSetSource )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/topoSets )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/surfaceLocation )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/triSurfaceTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/triangleFuncs )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/twoDPointCorrector )
include_directories( ${CMAKE_SOURCE_DIR}/src/triSurface/tools/labelledTri )
include_directories( ${CMAKE_SOURCE_DIR}/src/triSurface/triSurface )
include_directories( ${CMAKE_SOURCE_DIR}/src/triSurface/triSurface/geometricSurfacePatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/triSurface/triSurface/surfacePatch )

