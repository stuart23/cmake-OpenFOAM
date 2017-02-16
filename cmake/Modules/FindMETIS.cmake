# - Try to find Metis
# Once done this will define
#  METIS_FOUND - System has METIS 
#  METIS_INCLUDE_DIRS - The METIS include directories
#  METIS_LIBRARIES - The libraries needed to use METIS
#  METIS_DEFINITIONS - Compiler switches required for using METIS

find_package(PkgConfig)
pkg_check_modules(METIS QUIET metis)
set(METIS_DEFINITIONS ${METIS_CFLAGS_OTHER})

find_path(METIS_INCLUDE_DIR metis.h
          PATHS /usr/include
          )

find_library(METIS_LIBRARY 
             NAMES metis
	     HINTS ${METIS_LIBDIR} ${METIS_LIB_DIR} 
	     )

include(FindPackageHandleStandardArgs)
# handle the QUIETLY and REQUIRED arguments and set METIS_FOUND to TRUE
# if all listed variables are TRUE
find_package_handle_standard_args(METIS  DEFAULT_MSG
                                  METIS_LIBRARY METIS_INCLUDE_DIR)

mark_as_advanced(METIS_INCLUDE_DIR METIS_LIBRARY )

set(METIS_LIBRARIES ${METIS_LIBRARY} )
set(METIS_INCLUDE_DIRS ${METIS_INCLUDE_DIR} )

