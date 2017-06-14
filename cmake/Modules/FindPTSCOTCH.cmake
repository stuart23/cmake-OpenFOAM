# - Try to find ptscotch
# Once done this will define
#  PTSCOTCH_FOUND - System has PTSCOTCH 
#  PTSCOTCH_INCLUDE_DIRS - The PTSCOTCH include directories
#  PTSCOTCH_LIBRARIES - The libraries needed to use PTSCOTCH
#  PTSCOTCH_DEFINITIONS - Compiler switches required for using PTSCOTCH

find_package(PkgConfig)
pkg_check_modules(PTSCOTCH QUIET ptscotch)
set(PTSCOTCH_DEFINITIONS ${PTSCOTCH_CFLAGS_OTHER})

find_path(PTSCOTCH_INCLUDE_DIR ptscotch.h
          PATHS /usr/include
	  /usr/include/openmpi-x86_64
          )

find_library(PTSCOTCH_LIBRARY 
             NAMES ptscotch ptscotcherrexit
	     HINTS ${PTSCOTCH_LIBDIR} ${PTSCOTCH_LIB_DIR} /usr/lib64/openmpi/lib
	     )

include(FindPackageHandleStandardArgs)
# handle the QUIETLY and REQUIRED arguments and set PTSCOTCH_FOUND to TRUE
# if all listed variables are TRUE
find_package_handle_standard_args(PTSCOTCH  DEFAULT_MSG
                                  PTSCOTCH_LIBRARY PTSCOTCH_INCLUDE_DIR)

mark_as_advanced(PTSCOTCH_INCLUDE_DIR PTSCOTCH_LIBRARY )

set(PTSCOTCH_LIBRARIES ${PTSCOTCH_LIBRARY} )
set(PTSCOTCH_INCLUDE_DIRS ${PTSCOTCH_INCLUDE_DIR} )

