#May need to link against:
#LIB_LIBS = \
#    -lfiniteVolume \
#    -lmeshTools

set( SOURCES

partialWrite/partialWrite.C
partialWrite/partialWriteFunctionObject.C

removeRegisteredObject/removeRegisteredObject.C
removeRegisteredObject/removeRegisteredObjectFunctionObject.C

writeDictionary/writeDictionary.C
writeDictionary/writeDictionaryFunctionObject.C

writeRegisteredObject/writeRegisteredObject.C
writeRegisteredObject/writeRegisteredObjectFunctionObject.C

)

## Define the output
add_library( IOFunctionObjects SHARED ${SOURCES} )

