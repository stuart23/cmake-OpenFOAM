set( SOURCES

joints/floating/floatingJoint.C

joints/Rx/Rx.C
joints/Ry/Ry.C
joints/Rz/Rz.C
joints/Ra/Ra.C
joints/Rs/Rs.C
joints/Rzyx/Rzyx.C
joints/Rxyz/Rxyz.C
joints/Ryxz/Ryxz.C

joints/Px/Px.C
joints/Py/Py.C
joints/Pz/Pz.C
joints/Pa/Pa.C
joints/Pxyz/Pxyz.C

restraints/restraint/rigidBodyRestraint.C
restraints/restraint/rigidBodyRestraintNew.C
restraints/linearSpring/linearSpring.C
restraints/linearDamper/linearDamper.C
restraints/linearAxialAngularSpring/linearAxialAngularSpring.C
restraints/sphericalAngularDamper/sphericalAngularDamper.C

rigidBodyModel/rigidBodyModel.C
rigidBodyModel/forwardDynamics.C

rigidBodyModelState/rigidBodyModelState.C
rigidBodyModelState/rigidBodyModelStateIO.C

rigidBodyMotion/rigidBodyMotion.C
rigidBodyMotion/rigidBodyMotionIO.C

rigidBodySolvers/rigidBodySolver/rigidBodySolver.C
rigidBodySolvers/rigidBodySolver/newRigidBodySolver.C
rigidBodySolvers/symplectic/symplectic.C
rigidBodySolvers/Newmark/Newmark.C
rigidBodySolvers/CrankNicolson/CrankNicolson.C

)

## Define the output
add_library( rigidBodyDynamics SHARED ${SOURCES} )
install( TARGETS rigidBodyDynamics DESTINATION lib )

include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX )
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
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/ListOps )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/PtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UIndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UPtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/NamedEnum )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/IOstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Pstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Sstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/StringStreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Tstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/token )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/entry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/primitiveEntry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/error )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/runTimeSelection/construction )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/typeInfo )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/Field )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/labelField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/scalarField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/sphericalTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/symmTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/tensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/vectorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/constants/mathematical )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/debug )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/Xfer )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/autoPtr )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/refCount )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/tmp )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/mapPolyMesh/mapDistribute )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/point )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/MatrixSpace )
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
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/hashes/Hash )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/hashes/Hasher )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int32 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int64 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/label )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uLabel )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint32 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint64 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/nullObject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ops )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/pTraits )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/quaternion )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/septernion )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/spatialVectorAlgebra/CompactSpatialTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/spatialVectorAlgebra/CompactSpatialTensor/compactSpatialTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/spatialVectorAlgebra/CompactSpatialTensorT )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/spatialVectorAlgebra/SpatialTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/spatialVectorAlgebra/SpatialTensor/spatialTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/spatialVectorAlgebra/SpatialVector )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/spatialVectorAlgebra/SpatialVector/spatialVector )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/spatialVectorAlgebra/spatialTransform )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/fileName )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/keyType )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/string )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/word )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/wordRe )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/transform )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/triad )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/zero )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/bodies/compositeBody )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/bodies/jointBody )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/bodies/masslessBody )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/bodies/rigidBody )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/bodies/subBody )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/Pa )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/Px )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/Pxyz )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/Py )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/Pz )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/Ra )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/Rs )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/Rx )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/Rxyz )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/Ry )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/Ryxz )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/Rz )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/Rzyx )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/composite )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/floating )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/joint )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/joints/null )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/restraints/linearAxialAngularSpring )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/restraints/linearDamper )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/restraints/linearSpring )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/restraints/restraint )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/restraints/sphericalAngularDamper )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/rigidBodyInertia )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/rigidBodyModel )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/rigidBodyModelState )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/rigidBodyMotion )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/rigidBodySolvers/CrankNicolson )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/rigidBodySolvers/Newmark )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/rigidBodySolvers/rigidBodySolver )
include_directories( ${CMAKE_SOURCE_DIR}/src/rigidBodyDynamics/rigidBodySolvers/symplectic )