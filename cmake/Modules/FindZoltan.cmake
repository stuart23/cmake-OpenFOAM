# - Try to find Zoltan
# Once done this will define
#  ZOLTAN_FOUND - System has ZOLTAN 
#  ZOLTAN_INCLUDE_DIRS - The ZOLTAN include directories
#  ZOLTAN_LIBRARIES - The libraries needed to use ZOLTAN
#  ZOLTAN_DEFINITIONS - Compiler switches required for using ZOLTAN

find_package(PkgConfig)
pkg_check_modules(ZOLTAN QUIET zoltan)
set(ZOLTAN_DEFINITIONS ${ZOLTAN_CFLAGS_OTHER})

find_path(ZOLTAN_INCLUDE_DIR zoltan.h
          PATHS /usr/include /usr/local/include
          )

find_library(ZOLTAN_LIBRARY 
             NAMES zoltan
	     HINTS ${ZOLTAN_LIBDIR} ${ZOLTAN_LIB_DIR} 
	     )

include(FindPackageHandleStandardArgs)
# handle the QUIETLY and REQUIRED arguments and set ZOLTAN_FOUND to TRUE
# if all listed variables are TRUE
find_package_handle_standard_args(ZOLTAN  DEFAULT_MSG
                                  ZOLTAN_LIBRARY ZOLTAN_INCLUDE_DIR)

mark_as_advanced(ZOLTAN_INCLUDE_DIR ZOLTAN_LIBRARY )

set(ZOLTAN_LIBRARIES ${ZOLTAN_LIBRARY} )
set(ZOLTAN_INCLUDE_DIRS ${ZOLTAN_INCLUDE_DIR} )

