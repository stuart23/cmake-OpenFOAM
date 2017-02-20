set( SOURCES

liquidProperties/liquidProperties.C
H2O/H2O.C
C7H16/C7H16.C
C12H26/C12H26.C
C10H22/C10H22.C
C8H18/C8H18.C
IC8H18/IC8H18.C
C4H10O/C4H10O.C
C2H6O/C2H6O.C
IDEA/IDEA.C
aC10H7CH3/aC10H7CH3.C
bC10H7CH3/bC10H7CH3.C
C8H10/C8H10.C
C16H34/C16H34.C
C9H20/C9H20.C
C6H6/C6H6.C
C7H8/C7H8.C
C6H14/C6H14.C
C13H28/C13H28.C
C14H30/C14H30.C
C3H8/C3H8.C
C3H6O/C3H6O.C
C2H6/C2H6.C
CH3OH/CH3OH.C
C2H5OH/C2H5OH.C
Ar/Ar.C
N2/N2.C
MB/MB.C
CH4N2O/CH4N2O.C
nC3H8O/nC3H8O.C
iC3H8O/iC3H8O.C

)

## Define the output
add_library( liquidProperties SHARED ${SOURCES} )

target_link_libraries( liquidProperties thermophysicalFunctions )

include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/HashTable )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/ILList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/LList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/LPtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/UILList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/linkTypes/DLListBase )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/linkTypes/SLListBase )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/user )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/BiIndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/FixedList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/IndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/List )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/PtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UIndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/IOstreams )
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
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/debug )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/Xfer )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/autoPtr )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/refCount )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/tmp )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/doubleScalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/floatScalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/scalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Swap )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/VectorSpace )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/bools/Switch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/bools/bool )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/chars/char )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/contiguous )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/direction )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/hashes/Hash )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/hashes/Hasher )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int32 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int64 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/label )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uLabel )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint32 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint64 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/nullObject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/pTraits )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/fileName )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/keyType )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/string )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/word )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/wordRe )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/Ar )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C10H22 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C12H26 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C13H28 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C14H30 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C16H34 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C2H5OH )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C2H6 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C2H6O )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C3H6O )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C3H8 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C4H10O )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C6H14 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C6H6 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C7H16 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C7H8 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C8H10 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C8H18 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/C9H20 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/CH3OH )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/CH4N2O )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/H2O )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/IC8H18 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/IDEA )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/MB )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/N2 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/aC10H7CH3 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/bC10H7CH3 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/iC3H8O )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/liquidProperties )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/properties/liquidProperties/nC3H8O )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/thermophysicalFunctions/APIfunctions/APIdiffCoefFunc )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/thermophysicalFunctions/NSRDSfunctions/NSRDSfunc0 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/thermophysicalFunctions/NSRDSfunctions/NSRDSfunc1 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/thermophysicalFunctions/NSRDSfunctions/NSRDSfunc14 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/thermophysicalFunctions/NSRDSfunctions/NSRDSfunc2 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/thermophysicalFunctions/NSRDSfunctions/NSRDSfunc3 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/thermophysicalFunctions/NSRDSfunctions/NSRDSfunc4 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/thermophysicalFunctions/NSRDSfunctions/NSRDSfunc5 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/thermophysicalFunctions/NSRDSfunctions/NSRDSfunc6 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/thermophysicalFunctions/NSRDSfunctions/NSRDSfunc7 )
include_directories( ${CMAKE_SOURCE_DIR}/src/thermophysicalModels/thermophysicalFunctions/thermophysicalFunction )
