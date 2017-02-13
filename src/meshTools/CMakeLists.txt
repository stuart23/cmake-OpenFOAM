# May need to link against these libs:
#LIB_LIBS = \
#    -ltriSurface \
#    -lsurfMesh \
#    -lfileFormats

set( SOURCES

cellClassification/cellClassification.C
cellClassification/cellInfo.C

cellQuality/cellQuality.C

cellDist/cellDistFuncs.C
cellDist/patchWave/patchWave.C
cellDist/wallPoint/wallPoint.C

cellFeatures/cellFeatures.C

coordinateSystems/coordinateSystem.C
coordinateSystems/coordinateSystemNew.C
coordinateSystems/coordinateSystems.C
coordinateSystems/cylindricalCS.C
coordinateSystems/cartesianCS.C
coordinateSystems/coordinateRotation/axesRotation.C
coordinateSystems/coordinateRotation/coordinateRotation.C
coordinateSystems/coordinateRotation/coordinateRotationNew.C
coordinateSystems/coordinateRotation/EulerCoordinateRotation.C
coordinateSystems/coordinateRotation/STARCDCoordinateRotation.C
coordinateSystems/coordinateRotation/cylindrical.C

edgeFaceCirculator/edgeFaceCirculator.C

polyMeshZipUpCells/polyMeshZipUpCells.C
primitiveMeshGeometry/primitiveMeshGeometry.C

meshSearch/meshSearch.C
meshSearch/meshSearchFACE_CENTRE_TRISMeshObject.C
meshSearch/meshSearchMeshObject.C

meshTools/meshTools.C

algorithms/PointEdgeWave/PointEdgeWaveName.C
algorithms/PointEdgeWave/pointEdgePoint.C

algorithms/PatchEdgeFaceWave/PatchEdgeFaceWaveName.C
algorithms/PatchEdgeFaceWave/patchEdgeFaceInfo.C
algorithms/PatchEdgeFaceWave/patchPatchDist.C
algorithms/PatchEdgeFaceWave/patchEdgeFaceRegion.C
algorithms/PatchEdgeFaceWave/patchEdgeFaceRegions.C

algorithms/MeshWave/MeshWaveName.C
algorithms/MeshWave/FaceCellWaveName.C

regionSplit/regionSplit.C
regionSplit/localPointRegion.C

indexedOctree/treeDataEdge.C
indexedOctree/treeDataFace.C
indexedOctree/treeDataPoint.C
indexedOctree/treeDataPrimitivePatchName.C
indexedOctree/treeDataTriSurface.C

searchableSurface/searchableBox.C
searchableSurface/searchableCylinder.C
searchableSurface/searchableDisk.C
searchableSurface/searchablePlane.C
searchableSurface/searchablePlate.C
searchableSurface/searchableSphere.C
searchableSurface/searchableSurface.C
searchableSurface/searchableSurfaceCollection.C
searchableSurface/searchableSurfaces.C
searchableSurface/searchableSurfacesQueries.C
searchableSurface/searchableSurfaceWithGaps.C
searchableSurface/triSurfaceMesh.C
searchableSurface/closedTriSurfaceMesh.C

sets/topoSets/cellSet.C
sets/topoSets/topoSet.C
sets/topoSets/faceSet.C
sets/topoSets/pointSet.C
sets/topoSets/cellZoneSet.C
sets/topoSets/faceZoneSet.C
sets/topoSets/pointZoneSet.C

sets/topoSetSource/topoSetSource.C

sets/cellSources/faceToCell/faceToCell.C
sets/cellSources/fieldToCell/fieldToCell.C
sets/cellSources/pointToCell/pointToCell.C
sets/cellSources/shapeToCell/shapeToCell.C
sets/cellSources/boxToCell/boxToCell.C
sets/cellSources/regionToCell/regionToCell.C
sets/cellSources/rotatedBoxToCell/rotatedBoxToCell.C
sets/cellSources/labelToCell/labelToCell.C
sets/cellSources/surfaceToCell/surfaceToCell.C
sets/cellSources/cellToCell/cellToCell.C
sets/cellSources/nearestToCell/nearestToCell.C
sets/cellSources/nbrToCell/nbrToCell.C
sets/cellSources/zoneToCell/zoneToCell.C
sets/cellSources/sphereToCell/sphereToCell.C
sets/cellSources/cylinderToCell/cylinderToCell.C
sets/cellSources/faceZoneToCell/faceZoneToCell.C
sets/cellSources/cylinderAnnulusToCell/cylinderAnnulusToCell.C
sets/cellSources/targetVolumeToCell/targetVolumeToCell.C

sets/faceSources/faceToFace/faceToFace.C
sets/faceSources/labelToFace/labelToFace.C
sets/faceSources/cellToFace/cellToFace.C
sets/faceSources/normalToFace/normalToFace.C
sets/faceSources/pointToFace/pointToFace.C
sets/faceSources/patchToFace/patchToFace.C
sets/faceSources/boundaryToFace/boundaryToFace.C
sets/faceSources/zoneToFace/zoneToFace.C
sets/faceSources/boxToFace/boxToFace.C
sets/faceSources/regionToFace/regionToFace.C

sets/pointSources/labelToPoint/labelToPoint.C
sets/pointSources/pointToPoint/pointToPoint.C
sets/pointSources/cellToPoint/cellToPoint.C
sets/pointSources/faceToPoint/faceToPoint.C
sets/pointSources/boxToPoint/boxToPoint.C
sets/pointSources/surfaceToPoint/surfaceToPoint.C
sets/pointSources/zoneToPoint/zoneToPoint.C
sets/pointSources/nearestToPoint/nearestToPoint.C

sets/faceZoneSources/faceZoneToFaceZone/faceZoneToFaceZone.C
sets/faceZoneSources/setsToFaceZone/setsToFaceZone.C
sets/faceZoneSources/setToFaceZone/setToFaceZone.C
sets/faceZoneSources/setAndNormalToFaceZone/setAndNormalToFaceZone.C
sets/faceZoneSources/searchableSurfaceToFaceZone/searchableSurfaceToFaceZone.C

sets/cellZoneSources/setToCellZone/setToCellZone.C

sets/pointZoneSources/setToPointZone/setToPointZone.C

momentOfInertia/momentOfInertia.C

surfaceSets/surfaceSets.C

triSurface/orientedSurface/orientedSurface.C
triSurface/surfaceLocation/surfaceLocation.C

triSurface/booleanOps/surfaceIntersection/surfaceIntersection.C
triSurface/booleanOps/surfaceIntersection/surfaceIntersectionFuncs.C
triSurface/booleanOps/surfaceIntersection/edgeIntersections.C

triSurface/booleanOps/booleanSurface/booleanSurface.C

triSurface/booleanOps/intersectedSurface/intersectedSurface.C
triSurface/booleanOps/intersectedSurface/edgeSurface.C

triSurface/triSurfaceSearch/triSurfaceSearch.C
triSurface/triSurfaceSearch/triSurfaceRegionSearch.C
triSurface/triangleFuncs/triangleFuncs.C
triSurface/surfaceFeatures/surfaceFeatures.C
triSurface/triSurfaceTools/triSurfaceTools.C
triSurface/triSurfaceTools/geompack/geompack.C
triSurface/triSurfaceTools/pointToPointPlanarInterpolation.C

twoDPointCorrector/twoDPointCorrector.C

AMIInterpolation/AMIInterpolation/AMIInterpolationName.C
AMIInterpolation/AMIInterpolation/AMIPatchToPatchInterpolation.C
AMIInterpolation/faceAreaIntersect/faceAreaIntersect.C
AMIInterpolation/GAMG/interfaces/cyclicAMIGAMGInterface/cyclicAMIGAMGInterface.C
AMIInterpolation/GAMG/interfaceFields/cyclicAMIGAMGInterfaceField/cyclicAMIGAMGInterfaceField.C
AMIInterpolation/GAMG/interfaces/cyclicACMIGAMGInterface/cyclicACMIGAMGInterface.C
AMIInterpolation/GAMG/interfaceFields/cyclicACMIGAMGInterfaceField/cyclicACMIGAMGInterfaceField.C

AMIInterpolation/patches/cyclicAMI/cyclicAMILduInterfaceField/cyclicAMILduInterface.C
AMIInterpolation/patches/cyclicAMI/cyclicAMILduInterfaceField/cyclicAMILduInterfaceField.C
AMIInterpolation/patches/cyclicAMI/cyclicAMIPolyPatch/cyclicAMIPolyPatch.C
AMIInterpolation/patches/cyclicAMI/cyclicAMIPointPatch/cyclicAMIPointPatch.C
AMIInterpolation/patches/cyclicAMI/cyclicAMIPointPatchField/cyclicAMIPointPatchFields.C

AMIInterpolation/patches/cyclicACMI/cyclicACMILduInterfaceField/cyclicACMILduInterface.C
AMIInterpolation/patches/cyclicACMI/cyclicACMILduInterfaceField/cyclicACMILduInterfaceField.C
AMIInterpolation/patches/cyclicACMI/cyclicACMIPolyPatch/cyclicACMIPolyPatch.C
AMIInterpolation/patches/cyclicACMI/cyclicACMIPointPatch/cyclicACMIPointPatch.C
AMIInterpolation/patches/cyclicACMI/cyclicACMIPointPatchField/cyclicACMIPointPatchFields.C

mappedPatches/mappedPolyPatch/mappedPatchBase.C
mappedPatches/mappedPolyPatch/mappedPolyPatch.C
mappedPatches/mappedPolyPatch/mappedWallPolyPatch.C
mappedPatches/mappedPolyPatch/mappedVariableThicknessWallPolyPatch.C

mappedPatches/mappedPointPatch/mappedPointPatch.C
mappedPatches/mappedPointPatch/mappedWallPointPatch.C

meshStructure/meshStructure.C
meshStructure/topoDistanceData.C
meshStructure/pointTopoDistanceData.C

regionCoupled/patches/regionCoupledPolyPatch/regionCoupledBase.C
regionCoupled/patches/regionCoupledPolyPatch/regionCoupledPolyPatch.C
regionCoupled/patches/regionCoupledPolyPatch/regionCoupledWallPolyPatch.C
regionCoupled/patches/regionCoupledLduInterface/regionCoupledLduInterface.C
regionCoupled/patches/regionCoupledPointPatch/regionCoupledPointPatch.C
regionCoupled/patches/regionCoupledPointPatch/regionCoupledWallPointPatch.C

regionCoupled/GAMG/interfaces/regionCoupledGAMGInterface/regionCoupledBaseGAMGInterface.C
regionCoupled/GAMG/interfaces/regionCoupledGAMGInterface/regionCoupledGAMGInterface.C
regionCoupled/GAMG/interfaces/regionCoupledGAMGInterface/regionCoupledWallGAMGInterface.C
regionCoupled/GAMG/interfaceFields/regionCoupledGAMGInterfaceField/regionCoupledGAMGInterfaceField.C
regionCoupled/GAMG/interfaceFields/regionCoupledGAMGInterfaceField/regionCoupledWallGAMGInterfaceField.C

tetOverlapVolume/tetOverlapVolume.C

)

## Define the output
add_library( meshTools SHARED ${SOURCES} )

include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX )
include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX/cpuTime )
include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX/memInfo )
include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX/signals )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/algorithms/indexedOctree )
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
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/CompactIOList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/IOField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/IOList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/IOPtrList )
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
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/DynamicField )
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
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/basic/calculated )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/pointPatchField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/clock )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/constants/mathematical )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/debug )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/unitConversion )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/include )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/interpolations/primitivePatchInterpolation )
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
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduSchedule )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/GAMGAgglomeration )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/interfaceFields/GAMGInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/interfaces/GAMGInterface )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/scalarMatrices )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/Xfer )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/autoPtr )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/refCount )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/tmp )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/GeoMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/Identifiers/patch )
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
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointPatches/derived/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointPatches/derived/wall )
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
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/one )
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
include_directories( ${CMAKE_SOURCE_DIR}/src/fileFormats/coordSet )
include_directories( ${CMAKE_SOURCE_DIR}/src/fileFormats/sampledSetWriters )
include_directories( ${CMAKE_SOURCE_DIR}/src/fileFormats/sampledSetWriters/vtk )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/AMIInterpolation )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/AMIInterpolation/AMIMethod/AMIMethod )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/AMIInterpolation/AMIMethod/directAMI )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/AMIInterpolation/AMIMethod/faceAreaWeightAMI )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/AMIInterpolation/AMIMethod/mapNearestAMI )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/AMIInterpolation/AMIMethod/partialFaceAreaWeightAMI )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/GAMG/interfaceFields/cyclicACMIGAMGInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/GAMG/interfaceFields/cyclicAMIGAMGInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/GAMG/interfaces/cyclicACMIGAMGInterface )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/GAMG/interfaces/cyclicAMIGAMGInterface )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/faceAreaIntersect )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/patches/cyclicACMI/cyclicACMILduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/patches/cyclicACMI/cyclicACMIPointPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/patches/cyclicACMI/cyclicACMIPointPatchField )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/patches/cyclicACMI/cyclicACMIPolyPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/patches/cyclicAMI/cyclicAMILduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/patches/cyclicAMI/cyclicAMIPointPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/patches/cyclicAMI/cyclicAMIPointPatchField )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/patches/cyclicAMI/cyclicAMIPolyPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/algorithms/MeshWave )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/algorithms/PatchEdgeFaceWave )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/algorithms/PointEdgeWave )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/cellClassification )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/cellDist )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/cellDist/patchWave )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/cellDist/wallPoint )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/cellFeatures )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/cellQuality )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/coordinateSystems )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/coordinateSystems/coordinateRotation )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/edgeFaceCirculator )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/indexedOctree )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/mappedPatches/mappedPointPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/mappedPatches/mappedPolyPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/meshSearch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/meshStructure )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/meshTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/momentOfInertia )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/polyMeshZipUpCells )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/primitiveMeshGeometry )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/regionCoupled/GAMG/interfaceFields/regionCoupledGAMGInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/regionCoupled/GAMG/interfaces/regionCoupledGAMGInterface )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/regionCoupled/patches/regionCoupledLduInterface )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/regionCoupled/patches/regionCoupledPointPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/regionCoupled/patches/regionCoupledPolyPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/regionSplit )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/searchableSurface )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/boxToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/cellToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/cylinderAnnulusToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/cylinderToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/faceToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/faceZoneToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/fieldToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/labelToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/nbrToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/nearestToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/pointToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/regionToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/rotatedBoxToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/shapeToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/sphereToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/surfaceToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/targetVolumeToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellSources/zoneToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/cellZoneSources/setToCellZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceSources/boundaryToFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceSources/boxToFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceSources/cellToFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceSources/faceToFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceSources/labelToFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceSources/normalToFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceSources/patchToFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceSources/pointToFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceSources/regionToFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceSources/zoneToFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceZoneSources/faceZoneToFaceZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceZoneSources/searchableSurfaceToFaceZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceZoneSources/setAndNormalToFaceZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceZoneSources/setToFaceZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/faceZoneSources/setsToFaceZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/pointSources/boxToPoint )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/pointSources/cellToPoint )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/pointSources/faceToPoint )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/pointSources/labelToPoint )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/pointSources/nearestToPoint )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/pointSources/pointToPoint )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/pointSources/surfaceToPoint )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/pointSources/zoneToPoint )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/pointZoneSources/setToPointZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/topoSetSource )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/topoSets )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/surfaceSets )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/tetOverlapVolume )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/booleanOps/booleanSurface )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/booleanOps/intersectedSurface )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/booleanOps/surfaceIntersection )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/orientedSurface )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/surfaceFeatures )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/surfaceLocation )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/triSurfaceSearch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/triSurfaceTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/triSurfaceTools/geompack )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/triangleFuncs )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/twoDPointCorrector )
include_directories( ${CMAKE_SOURCE_DIR}/src/surfMesh/surfaceFormats/obj )
include_directories( ${CMAKE_SOURCE_DIR}/src/triSurface/faceTriangulation )
include_directories( ${CMAKE_SOURCE_DIR}/src/triSurface/tools/labelPair )
include_directories( ${CMAKE_SOURCE_DIR}/src/triSurface/tools/labelledTri )
include_directories( ${CMAKE_SOURCE_DIR}/src/triSurface/triSurface )
include_directories( ${CMAKE_SOURCE_DIR}/src/triSurface/triSurface/geometricSurfacePatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/triSurface/triSurface/surfacePatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/triSurface/triSurfaceFields )

