set( CONFIG_FILES
	controlDict
	cellModels
)

install( FILES ${CONFIG_FILES}
	DESTINATION ${CMAKE_INSTALL_PREFIX}/etc )

