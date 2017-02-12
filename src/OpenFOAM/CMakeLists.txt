set( SOURCES
	# global/global.Cver
	# global/argList/argList.C
	# global/clock/clock.C
	# 
	# primitives/bools/bool/bool.C
	# primitives/bools/bool/boolIO.C
	# primitives/bools/Switch/Switch.C
	# primitives/bools/Switch/SwitchIO.C
	# primitives/bools/lists/boolList.C
	# 
	# primitives/chars/char/charIO.C
	# primitives/chars/wchar/wcharIO.C
	# 
	# primitives/ints/uint32/uint32.C
	# primitives/ints/uint32/uint32IO.C
	# primitives/ints/uint64/uint64.C
	# primitives/ints/uint64/uint64IO.C
	# primitives/ints/uint/uintIO.C
	# primitives/ints/int32/int32.C
	# primitives/ints/int32/int32IO.C
	# primitives/ints/int64/int64.C
	# primitives/ints/int64/int64IO.C
	# primitives/ints/int/intIO.C
	# primitives/ints/label/label.C
	# primitives/ints/uLabel/uLabel.C
	# primitives/ints/lists/labelIOList.C
	# primitives/ints/lists/labelListIOList.C
	# 
	# primitives/Scalar/doubleScalar/doubleScalar.C
	# primitives/Scalar/floatScalar/floatScalar.C
	# primitives/Scalar/scalar/scalar.C
	# primitives/Scalar/lists/scalarList.C
	# primitives/Scalar/lists/scalarIOList.C
	# primitives/Scalar/lists/scalarListIOList.C
	# 
	# primitives/DiagTensor/diagTensor/diagTensor.C
	# primitives/SphericalTensor/sphericalTensor/sphericalTensor.C
	# primitives/SphericalTensor/labelSphericalTensor/labelSphericalTensor.C
	# primitives/SymmTensor/labelSymmTensor/labelSymmTensor.C
	# primitives/SymmTensor/symmTensor/symmTensor.C
	# primitives/Tensor/labelTensor/labelTensor.C
	# primitives/Tensor/tensor/tensor.C
	# primitives/Tensor/lists/sphericalTensorList.C
	# primitives/Tensor/lists/symmTensorList.C
	# primitives/Tensor/lists/tensorList.C
	# 
	# primitives/Vector/complexVector/complexVector.C
	# primitives/Vector/labelVector/labelVector.C
	# primitives/Vector/vector/vector.C
	# primitives/Vector/lists/vectorList.C
	# primitives/Vector/lists/vectorIOList.C
	# primitives/Vector/lists/vectorListIOList.C
	# 
	# primitives/Tensor2D/tensor2D/tensor2D.C
	# primitives/SphericalTensor2D/sphericalTensor2D/sphericalTensor2D.C
	# primitives/SymmTensor2D/symmTensor2D/symmTensor2D.C
	# primitives/Vector2D/vector2D/vector2D.C
	# 
	# primitives/complex/complex.C
	# primitives/globalIndexAndTransform/globalIndexAndTransform.C
	# primitives/globalIndexAndTransform/vectorTensorTransform/vectorTensorTransform.C
	# primitives/quaternion/quaternion.C
	# primitives/septernion/septernion.C
	# primitives/triad/triad.C
	# 
	# primitives/functions/DataEntry/makeDataEntries.C
	# primitives/functions/Polynomial/polynomialFunction.C
	# 
	# primitives/subModelBase/subModelBase.C
	# 
	# primitives/strings/string/string.C
	# primitives/strings/string/stringIO.C
	# primitives/strings/string/stringIOList.C
	# primitives/strings/word/word.C
	# primitives/strings/word/wordIO.C
	# primitives/strings/word/wordIOList.C
	# primitives/strings/fileName/fileName.C
	# primitives/strings/fileName/fileNameIO.C
	# primitives/strings/keyType/keyType.C
	# primitives/strings/wordRe/wordRe.C
	# primitives/strings/lists/hashedWordList.C
	# primitives/strings/stringOps/stringOps.C
	# 
	# primitives/hashes/Hasher/Hasher.C
	# 
	# primitives/hashes/SHA1/SHA1.C
	# primitives/hashes/SHA1/SHA1Digest.C
	# 
	# primitives/random/Random/Random.C
	# primitives/random/cachedRandom/cachedRandom.C
	# 
	# primitives/ranges/labelRange/labelRange.C
	# primitives/ranges/labelRange/labelRanges.C
	# primitives/ranges/scalarRange/scalarRange.C
	# primitives/ranges/scalarRange/scalarRanges.C
	# 
	# containers/HashTables/HashTable/HashTableCore.C
	# containers/HashTables/StaticHashTable/StaticHashTableCore.C
	# containers/Lists/SortableList/ParSortableListName.C
	# containers/Lists/PackedList/PackedListCore.C
	# containers/Lists/PackedList/PackedBoolList.C
	# containers/Lists/ListOps/ListOps.C
	# containers/LinkedLists/linkTypes/SLListBase/SLListBase.C
	# containers/LinkedLists/linkTypes/DLListBase/DLListBase.C
	# 
	# db/IOstreams/token/tokenIO.C
	# 
	# db/IOstreams/IOstreams/IOstream.C
	# db/IOstreams/IOstreams/Istream.C
	# db/IOstreams/IOstreams/Ostream.C
	# 
	# db/IOstreams/Sstreams/ISstream.C
	# db/IOstreams/Sstreams/OSstream.C
	# db/IOstreams/Sstreams/SstreamsPrint.C
	# db/IOstreams/Sstreams/readHexLabel.C
	# db/IOstreams/Sstreams/prefixOSstream.C
	# 
	# db/IOstreams/gzstream/gzstream.C
	# 
	# db/IOstreams/Fstreams/IFstream.C
	# db/IOstreams/Fstreams/OFstream.C
	# 
	# db/IOstreams/Tstreams/ITstream.C
	# 
	# db/IOstreams/StringStreams/StringStreamsPrint.C
	# 
	# db/IOstreams/Pstreams/UIPstream.C
	# db/IOstreams/Pstreams/IPstream.C
	# db/IOstreams/Pstreams/UPstreamCommsStruct.C
	# db/IOstreams/Pstreams/Pstream.C
	# db/IOstreams/Pstreams/UOPstream.C
	# db/IOstreams/Pstreams/OPstream.C
	# db/IOstreams/Pstreams/PstreamBuffers.C
	# 
	# db/dictionary/dictionary.C
	# db/dictionary/dictionaryIO.C
	# 
	# db/dictionary/entry/entry.C
	# db/dictionary/entry/entryIO.C
	# 
	# db/dictionary/primitiveEntry/primitiveEntry.C
	# db/dictionary/primitiveEntry/primitiveEntryIO.C
	# 
	# db/dictionary/dictionaryEntry/dictionaryEntry.C
	# db/dictionary/dictionaryEntry/dictionaryEntryIO.C
	# 
	# db/dictionary/functionEntries/calcEntry/calcEntry.C
	# db/dictionary/functionEntries/codeStream/codeStream.C
	# db/dictionary/functionEntries/functionEntry/functionEntry.C
	# db/dictionary/functionEntries/includeEntry/includeEntry.C
	# db/dictionary/functionEntries/includeEtcEntry/includeEtcEntry.C
	# db/dictionary/functionEntries/includeIfPresentEntry/includeIfPresentEntry.C
	# db/dictionary/functionEntries/inputModeEntry/inputModeEntry.C
	# db/dictionary/functionEntries/removeEntry/removeEntry.C
	# 
	# db/IOobjects/IOdictionary/IOdictionary.C
	# db/IOobjects/IOdictionary/IOdictionaryIO.C
	# 
	# db/IOobjects/IOMap/IOMapName.C
	# 
	# db/IOobject/IOobject.C
	# db/IOobject/IOobjectIO.C
	# db/IOobject/IOobjectReadHeader.C
	# db/IOobject/IOobjectWriteHeader.C
	# 
	# db/regIOobject/regIOobjectRead.C
	# db/regIOobject/regIOobjectWrite.C
	# 
	# db/IOobjectList/IOobjectList.C
	# db/objectRegistry/objectRegistry.C
	# db/CallbackRegistry/CallbackRegistryName.C
	# 
	# db/dynamicLibrary/dlLibraryTable/dlLibraryTable.C
	# db/dynamicLibrary/dynamicCode/dynamicCode.C
	# db/dynamicLibrary/dynamicCode/dynamicCodeContext.C
	# db/dynamicLibrary/codedBase/codedBase.C
	# 
	# db/functionObjects/functionObject/functionObject.C
	# db/functionObjects/functionObjectList/functionObjectList.C
	# db/functionObjects/functionObjectFile/functionObjectFile.C
	# db/functionObjects/outputFilterOutputControl/outputFilterOutputControl.C
	# 
	# db/Time/TimePaths.C
	# db/Time/TimeState.C
	# db/Time/Time.C
	# db/Time/TimeIO.C
	# db/Time/findTimes.C
	# db/Time/subCycleTime.C
	# db/Time/findInstance.C
	# db/Time/timeSelector.C
	# 
	# dimensionSet/dimensionSet.C
	# dimensionSet/dimensionSetIO.C
	# dimensionSet/dimensionSets.C
	# dimensionedTypes/dimensionedScalar/dimensionedScalar.C
	# dimensionedTypes/dimensionedSphericalTensor/dimensionedSphericalTensor.C
	# dimensionedTypes/dimensionedSymmTensor/dimensionedSymmTensor.C
	# dimensionedTypes/dimensionedTensor/dimensionedTensor.C
	# 
	# matrices/solution/solution.C
	# 
	# db/Time/instant/instant.C
	# 
	# matrices/scalarMatrices/scalarMatrices.C
	# matrices/scalarMatrices/SVD/SVD.C
	# 
	# matrices/LUscalarMatrix/LUscalarMatrix.C
	# matrices/LUscalarMatrix/procLduMatrix.C
	# matrices/LUscalarMatrix/procLduInterface.C
	# 
	# matrices/lduMatrix/lduMatrix/lduMatrix.C
	# matrices/lduMatrix/lduMatrix/lduMatrixOperations.C
	# matrices/lduMatrix/lduMatrix/lduMatrixATmul.C
	# matrices/lduMatrix/lduMatrix/lduMatrixUpdateMatrixInterfaces.C
	# matrices/lduMatrix/lduMatrix/lduMatrixSolver.C
	# matrices/lduMatrix/lduMatrix/lduMatrixSmoother.C
	# matrices/lduMatrix/lduMatrix/lduMatrixPreconditioner.C
	# 
	# matrices/lduMatrix/solvers/diagonalSolver/diagonalSolver.C
	# matrices/lduMatrix/solvers/smoothSolver/smoothSolver.C
	# matrices/lduMatrix/solvers/PCG/PCG.C
	# matrices/lduMatrix/solvers/PBiCG/PBiCG.C
	# matrices/lduMatrix/solvers/ICCG/ICCG.C
	# matrices/lduMatrix/solvers/BICCG/BICCG.C
	# 
	# matrices/lduMatrix/smoothers/GaussSeidel/GaussSeidelSmoother.C
	# matrices/lduMatrix/smoothers/symGaussSeidel/symGaussSeidelSmoother.C
	# matrices/lduMatrix/smoothers/nonBlockingGaussSeidel/nonBlockingGaussSeidelSmoother.C
	# matrices/lduMatrix/smoothers/DIC/DICSmoother.C
	# matrices/lduMatrix/smoothers/FDIC/FDICSmoother.C
	# matrices/lduMatrix/smoothers/DICGaussSeidel/DICGaussSeidelSmoother.C
	# matrices/lduMatrix/smoothers/DILU/DILUSmoother.C
	# matrices/lduMatrix/smoothers/DILUGaussSeidel/DILUGaussSeidelSmoother.C
	# 
	# matrices/lduMatrix/preconditioners/noPreconditioner/noPreconditioner.C
	# matrices/lduMatrix/preconditioners/diagonalPreconditioner/diagonalPreconditioner.C
	# matrices/lduMatrix/preconditioners/DICPreconditioner/DICPreconditioner.C
	# matrices/lduMatrix/preconditioners/FDICPreconditioner/FDICPreconditioner.C
	# matrices/lduMatrix/preconditioners/DILUPreconditioner/DILUPreconditioner.C
	# matrices/lduMatrix/preconditioners/GAMGPreconditioner/GAMGPreconditioner.C
	# 
	# matrices/lduMatrix/lduAddressing/lduAddressing.C
	# matrices/lduMatrix/lduAddressing/lduInterface/lduInterface.C
	# matrices/lduMatrix/lduAddressing/lduInterface/processorLduInterface.C
	# matrices/lduMatrix/lduAddressing/lduInterface/cyclicLduInterface.C
	# 
	# matrices/lduMatrix/lduAddressing/lduInterfaceFields/lduInterfaceField/lduInterfaceField.C
	# matrices/lduMatrix/lduAddressing/lduInterfaceFields/processorLduInterfaceField/processorLduInterfaceField.C
	# matrices/lduMatrix/lduAddressing/lduInterfaceFields/cyclicLduInterfaceField/cyclicLduInterfaceField.C
	# 
	# matrices/lduMatrix/solvers/GAMG/GAMGSolver.C
	# matrices/lduMatrix/solvers/GAMG/GAMGSolverAgglomerateMatrix.C
	# matrices/lduMatrix/solvers/GAMG/GAMGSolverInterpolate.C
	# matrices/lduMatrix/solvers/GAMG/GAMGSolverScale.C
	# matrices/lduMatrix/solvers/GAMG/GAMGSolverSolve.C
	# 
	# matrices/lduMatrix/solvers/GAMG/interfaces/GAMGInterface/GAMGInterface.C
	# matrices/lduMatrix/solvers/GAMG/interfaces/GAMGInterface/GAMGInterfaceNew.C
	# matrices/lduMatrix/solvers/GAMG/interfaces/processorGAMGInterface/processorGAMGInterface.C
	# matrices/lduMatrix/solvers/GAMG/interfaces/processorCyclicGAMGInterface/processorCyclicGAMGInterface.C
	# matrices/lduMatrix/solvers/GAMG/interfaces/cyclicGAMGInterface/cyclicGAMGInterface.C
	# 
	# matrices/lduMatrix/solvers/GAMG/interfaceFields/GAMGInterfaceField/GAMGInterfaceField.C
	# matrices/lduMatrix/solvers/GAMG/interfaceFields/GAMGInterfaceField/GAMGInterfaceFieldNew.C
	# matrices/lduMatrix/solvers/GAMG/interfaceFields/processorGAMGInterfaceField/processorGAMGInterfaceField.C
	# matrices/lduMatrix/solvers/GAMG/interfaceFields/processorCyclicGAMGInterfaceField/processorCyclicGAMGInterfaceField.C
	# matrices/lduMatrix/solvers/GAMG/interfaceFields/cyclicGAMGInterfaceField/cyclicGAMGInterfaceField.C
	# 
	# matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/GAMGAgglomeration/GAMGAgglomeration.C
	# matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/GAMGAgglomeration/GAMGAgglomerateLduAddressing.C
	# 
	# matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/pairGAMGAgglomeration/pairGAMGAgglomeration.C
	# matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/pairGAMGAgglomeration/pairGAMGAgglomerate.C
	# 
	# matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/algebraicPairGAMGAgglomeration/algebraicPairGAMGAgglomeration.C
	# matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/dummyAgglomeration/dummyAgglomeration.C
	# matrices/lduMatrix/solvers/GAMG/GAMGProcAgglomerations/GAMGProcAgglomeration/GAMGProcAgglomeration.C
	# 
	# matrices/lduMatrix/solvers/GAMG/GAMGProcAgglomerations/masterCoarsestGAMGProcAgglomeration/masterCoarsestGAMGProcAgglomeration.C
	# matrices/lduMatrix/solvers/GAMG/GAMGProcAgglomerations/manualGAMGProcAgglomeration/manualGAMGProcAgglomeration.C
	# matrices/lduMatrix/solvers/GAMG/GAMGProcAgglomerations/eagerGAMGProcAgglomeration/eagerGAMGProcAgglomeration.C
	# matrices/lduMatrix/solvers/GAMG/GAMGProcAgglomerations/noneGAMGProcAgglomeration/noneGAMGProcAgglomeration.C
	# matrices/lduMatrix/solvers/GAMG/GAMGProcAgglomerations/procFacesGAMGProcAgglomeration/procFacesGAMGProcAgglomeration.C
	# 
	# meshes/lduMesh/lduMesh.C
	# meshes/lduMesh/lduPrimitiveMesh.C
	# 
	# matrices/LduMatrix/LduMatrix/lduMatrices.C
	# matrices/LduMatrix/LduMatrix/solverPerformance.C
	# matrices/LduMatrix/LduMatrix/LduInterfaceField/LduInterfaceFields.C
	# matrices/LduMatrix/Smoothers/lduSmoothers.C
	# matrices/LduMatrix/Preconditioners/lduPreconditioners.C
	# matrices/LduMatrix/Solvers/lduSolvers.C
	# 
	# meshes/primitiveShapes/line/line.C
	# meshes/primitiveShapes/plane/plane.C
	# meshes/primitiveShapes/triangle/intersection.C
	# meshes/primitiveShapes/objectHit/pointIndexHitIOList.C
	# 
	# meshes/meshShapes/edge/edge.C
	# meshes/meshShapes/edge/edgeIOList.C
	# 
	# meshes/meshShapes/face/face.C
	# meshes/meshShapes/face/faceIntersection.C
	# meshes/meshShapes/face/faceContactSphere.C
	# meshes/meshShapes/face/faceAreaInContact.C
	# meshes/meshShapes/face/faceIOList.C
	# 
	# meshes/meshShapes/cell/cell.C
	# meshes/meshShapes/cell/oppositeCellFace.C
	# meshes/meshShapes/cell/cellIOList.C
	# 
	# meshes/meshShapes/tetCell/tetCell.C
	# 
	# meshes/meshShapes/cellModeller/cellModeller.C
	# 
	# meshes/meshShapes/cellModel/cellModel.C
	# meshes/meshShapes/cellModel/cellModelIO.C
	# 
	# meshes/meshShapes/cellShape/cellShape.C
	# meshes/meshShapes/cellShape/cellShapeEqual.C
	# meshes/meshShapes/cellShape/cellShapeIO.C
	# meshes/meshShapes/cellShape/cellShapeIOList.C
	# 
	# meshes/Identifiers/patch/patchIdentifier.C
	# meshes/Identifiers/patch/coupleGroupIdentifier.C
	# 
	# meshes/MeshObject/meshObject.C
	# 
	# meshes/polyMesh/polyPatches/polyPatch/polyPatch.C
	# meshes/polyMesh/polyPatches/polyPatch/polyPatchNew.C
	# 
	# meshes/polyMesh/polyPatches/basic/coupled/coupledPolyPatch.C
	# meshes/polyMesh/polyPatches/basic/generic/genericPolyPatch.C
	# 
	# meshes/polyMesh/polyPatches/constraint/cyclic/cyclicPolyPatch.C
	# meshes/polyMesh/polyPatches/constraint/cyclicSlip/cyclicSlipPolyPatch.C
	# meshes/polyMesh/polyPatches/constraint/oldCyclic/oldCyclicPolyPatch.C
	# meshes/polyMesh/polyPatches/constraint/empty/emptyPolyPatch.C
	# meshes/polyMesh/polyPatches/constraint/nonuniformTransformCyclic/nonuniformTransformCyclicPolyPatch.C
	# meshes/polyMesh/polyPatches/constraint/processorCyclic/processorCyclicPolyPatch.C
	# meshes/polyMesh/polyPatches/constraint/processor/processorPolyPatch.C
	# meshes/polyMesh/polyPatches/constraint/symmetryPlane/symmetryPlanePolyPatch.C
	# meshes/polyMesh/polyPatches/constraint/symmetry/symmetryPolyPatch.C
	# meshes/polyMesh/polyPatches/constraint/wedge/wedgePolyPatch.C
	# 
	# meshes/polyMesh/polyPatches/derived/wall/wallPolyPatch.C
	# 
	# meshes/polyMesh/polyBoundaryMesh/polyBoundaryMesh.C
	# meshes/polyMesh/polyBoundaryMesh/polyBoundaryMeshEntries.C
	# 
	# meshes/ProcessorTopology/commSchedule.C
	# 
	# meshes/polyMesh/globalMeshData/globalMeshData.C
	# meshes/polyMesh/globalMeshData/globalPoints.C
	# meshes/polyMesh/globalMeshData/globalIndex.C
	# 
	# meshes/polyMesh/syncTools/syncTools.C
	# meshes/polyMesh/polyMeshTetDecomposition/polyMeshTetDecomposition.C
	# meshes/polyMesh/polyMeshTetDecomposition/tetIndices.C
	# 
	# meshes/polyMesh/zones/zone/zone.C
	# 
	# meshes/polyMesh/zones/cellZone/cellZone.C
	# meshes/polyMesh/zones/cellZone/cellZoneNew.C
	# 
	# meshes/polyMesh/zones/faceZone/faceZone.C
	# meshes/polyMesh/zones/faceZone/faceZoneNew.C
	# 
	# meshes/polyMesh/zones/pointZone/pointZone.C
	# meshes/polyMesh/zones/pointZone/pointZoneNew.C
	# 
	# meshes/polyMesh/polyMesh.C
	# meshes/polyMesh/polyMeshFromShapeMesh.C
	# meshes/polyMesh/polyMeshIO.C
	# meshes/polyMesh/polyMeshInitMesh.C
	# meshes/polyMesh/polyMeshClear.C
	# meshes/polyMesh/polyMeshUpdate.C
	# 
	# meshes/polyMesh/polyMeshCheck/polyMeshCheck.C
	# meshes/polyMesh/polyMeshCheck/polyMeshTools.C
	# 
	# meshes/primitiveMesh/primitiveMesh.C
	# meshes/primitiveMesh/primitiveMeshCellCells.C
	# meshes/primitiveMesh/primitiveMeshCellCentresAndVols.C
	# meshes/primitiveMesh/primitiveMeshCellEdges.C
	# meshes/primitiveMesh/primitiveMeshCells.C
	# meshes/primitiveMesh/primitiveMeshClear.C
	# meshes/primitiveMesh/primitiveMeshEdgeCells.C
	# meshes/primitiveMesh/primitiveMeshEdgeFaces.C
	# meshes/primitiveMesh/primitiveMeshEdges.C
	# meshes/primitiveMesh/primitiveMeshFaceCentresAndAreas.C
	# meshes/primitiveMesh/primitiveMeshFindCell.C
	# meshes/primitiveMesh/primitiveMeshPointCells.C
	# meshes/primitiveMesh/primitiveMeshPointFaces.C
	# meshes/primitiveMesh/primitiveMeshPointPoints.C
	# meshes/primitiveMesh/primitiveMeshCellPoints.C
	# meshes/primitiveMesh/primitiveMeshCalcCellShapes.C
	# 
	# meshes/primitiveMesh/primitiveMeshCheck/primitiveMeshCheck.C
	# meshes/primitiveMesh/primitiveMeshCheck/primitiveMeshCheckPointNearness.C
	# meshes/primitiveMesh/primitiveMeshCheck/primitiveMeshCheckEdgeLength.C
	# meshes/primitiveMesh/primitiveMeshCheck/primitiveMeshTools.C
	# 
	# meshes/primitiveMesh/primitivePatch/patchZones.C
	# meshes/primitiveMesh/primitivePatch/walkPatch.C
	# 
	# meshes/meshShapes/cellMatcher/cellMatcher.C
	# meshes/meshShapes/cellMatcher/hexMatcher.C
	# meshes/meshShapes/cellMatcher/wedgeMatcher.C
	# meshes/meshShapes/cellMatcher/prismMatcher.C
	# meshes/meshShapes/cellMatcher/pyrMatcher.C
	# meshes/meshShapes/cellMatcher/tetWedgeMatcher.C
	# meshes/meshShapes/cellMatcher/tetMatcher.C
	# meshes/meshShapes/cellMatcher/degenerateMatcher.C
	# 
	# meshes/polyMesh/mapPolyMesh/mapPolyMesh.C
	# meshes/polyMesh/mapPolyMesh/faceMapper/faceMapper.C
	# meshes/polyMesh/mapPolyMesh/cellMapper/cellMapper.C
	# meshes/polyMesh/mapPolyMesh/mapDistribute/mapDistribute.C
	# meshes/polyMesh/mapPolyMesh/mapDistribute/mapDistributePolyMesh.C
	# meshes/polyMesh/mapPolyMesh/mapDistribute/IOmapDistribute.C
	# meshes/polyMesh/mapPolyMesh/mapAddedPolyMesh.C

meshes/primitiveMesh/PrimitivePatch/PrimitivePatchName.C

meshes/pointMesh/pointMesh.C

meshes/pointMesh/pointMeshMapper/pointMapper.C
meshes/pointMesh/pointMeshMapper/pointPatchMapper.C


)

if( DOUBLE_PRECISION )
  set( SOURCES "${SOURCES};primitives/Vector/floatVector/floatVector.C" )
endif()

## Define the output
add_library( OpenFOAM SHARED ${SOURCES} )

include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX ) 
include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX/memInfo ) 
include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX/signals ) 
include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX/cpuTime ) 
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/include )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/globalIndexAndTransform )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/septernion )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/nil )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/complex )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/random/Random )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/random/cachedRandom )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/label )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uLabel )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int32 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint32 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int64 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint64 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/word )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/wordRe )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/string )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/stringOps )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/keyType )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/fileName )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/contiguous )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Swap )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/chars/char )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/hashes/SHA1 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/hashes/Hash )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/hashes/Hasher )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/pTraits )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/direction )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/scalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/floatScalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/doubleScalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/doubleScalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/bools/bool )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/bools/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/bools/Switch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/nullObject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/VectorSpace )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Vector2D/vector2D )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Vector2D )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ops )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Tuple2 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Tensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Tensor/tensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Tensor2D )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SymmTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SymmTensor/symmTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SymmTensor2D )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SphericalTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SphericalTensor/sphericalTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SphericalTensor2D )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SphericalTensor2D/sphericalTensor2D )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/DiagTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/DiagTensor/diagTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Vector )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Vector/vector )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Pair )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/globalIndexAndTransform/vectorTensorTransform )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ranges/scalarRange )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/triad )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/quaternion )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/transform )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/functions/DataEntry/CompatibilityConstant )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/functions/DataEntry/CSV )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/functions/DataEntry/Table )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/functions/DataEntry/TableFile )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/functions/DataEntry/DataEntry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/functions/DataEntry/PolynomialEntry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/functions/DataEntry/Constant )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/autoPtr )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/Xfer )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/refCount )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/tmp )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/scalarMatrices )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/scalarMatrices/SVD )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/LduMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/Solvers/DiagonalSolver )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/Solvers/SmoothSolver )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/Solvers/PCICG )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/Solvers/PBiCCCG )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/Solvers/PBiCICG )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/LduMatrix/LduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/Smoothers/GaussSeidel )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/Preconditioners/DiagonalPreconditioner )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/Preconditioners/DILUPreconditioner )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/Preconditioners/NoPreconditioner )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterface )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterfaceFields/lduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterfaceFields/cyclicLduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterfaceFields/processorLduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduSchedule )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/diagonalSolver )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/GAMG )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/interfaceFields/processorGAMGInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/interfaceFields/GAMGInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/interfaces/cyclicGAMGInterface )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/interfaces/processorGAMGInterface )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/interfaces/GAMGInterface )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/GAMGAgglomeration )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/pairGAMGAgglomeration )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGProcAgglomerations/GAMGProcAgglomeration )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/PCG )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/ICCG )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/BICCG )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/PBiCG )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/preconditioners/DICPreconditioner )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/preconditioners/FDICPreconditioner )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/preconditioners/DILUPreconditioner )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/smoothers/DIC )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/smoothers/DILU )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/smoothers/GaussSeidel )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LUscalarMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/Matrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/SquareMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/DiagonalMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/SymmetricSquareMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/RectangularMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/error )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dynamicLibrary/dlLibraryTable )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dynamicLibrary/dynamicCode )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/functionObjects/functionObjectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/functionObjects/functionObject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/Time )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/Time/instant )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/functionEntries/functionEntry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/functionEntries/codeStream )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/functionEntries/inputModeEntry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/functionEntries/includeEntry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/entry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/dictionaryEntry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/primitiveEntry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/hashes )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/gzstream )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Sstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/IOstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Fstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Pstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Tstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/StringStreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/token )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/typeInfo )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/objectRegistry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/IOdictionary )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/IOList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/IOField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/CompactIOList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/regIOobject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/runTimeSelection/construction )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/runTimeSelection/memberFunctions )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Circulators/ConstCirculator )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Circulators/CirculatorBase )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/List )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/SortableList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/PtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UPtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/FixedList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/PackedList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/SubList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/ListOps )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/ListListOps )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/DynamicList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/IndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UIndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/BiIndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/Map )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/HashTable )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/HashPtrTable )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/HashSet )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/NamedEnum )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Dictionaries/Dictionary )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Dictionaries/DictionaryBase )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/user )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/ILList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/UILList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/LList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/LPtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/linkTypes/DLListBase )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/linkTypes/SLListBase )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedType )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedVector )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedScalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedSymmTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionSet )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/pointPatchField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/basic/calculated )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedSphericalTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedSymmTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedScalarField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/FieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/sphericalTensorFieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/tensorFieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/symmTensorFieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/scalarFieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/transformList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/transformField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/diagTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/vectorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/tensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/symmTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/sphericalTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/Field )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/labelField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/scalarField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/pointFields )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricSymmTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricSphericalTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricScalarField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedSphericalTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/unitConversion )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/argList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/constants )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/constants/mathematical )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/clock )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/debug )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/JobInfo )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/Identifiers/patch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/bandCompression )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/ProcessorTopology )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/boundBox )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/treeBoundBox )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/lduMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/data )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/MeshObject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/GeoMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointMeshMapper )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointBoundaryMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointPatches/pointPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/syncTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyMeshTetDecomposition )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/globalMeshData )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/zone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/faceZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/cellZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/pointZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/ZoneMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/mapPolyMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/mapPolyMesh/faceMapper )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/mapPolyMesh/mapDistribute )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/mapPolyMesh/objectMap )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyBoundaryMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/polyPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/empty )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/wedge )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/symmetry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/cyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/processor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/point )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/plane )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/point2D )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/line )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/triangle )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/pyramid )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/tetrahedron )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/objectHit )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh/primitiveMeshCheck )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh/primitivePatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh/PrimitivePatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/edge )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cell )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cellShape )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cellModel )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cellModeller )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cellMatcher )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/face )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/triFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/algorithms/indexedOctree )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/interpolations/interpolationWeights/interpolationWeights )
