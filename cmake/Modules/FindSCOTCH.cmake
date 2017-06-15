# - Try to find Scotch
# Once done this will define
#  SCOTCH_FOUND - System has SCOTCH 
#  SCOTCH_INCLUDE_DIRS - The SCOTCH include directories
#  SCOTCH_LIBRARIES - The libraries needed to use SCOTCH
#  SCOTCH_DEFINITIONS - Compiler switches required for using SCOTCH

find_package(PkgConfig)
pkg_check_modules(SCOTCH QUIET scotch)
set(SCOTCH_DEFINITIONS ${SCOTCH_CFLAGS_OTHER})

find_path(SCOTCH_INCLUDE_DIR scotch.h
          PATHS /usr/include
          )

find_library(SCOTCH_LIBRARY 
             NAMES scotch
	     PATHS ${SCOTCH_LIBDIR} ${SCOTCH_LIB_DIR} 
	     )

find_library(SCOTCHERREXIT_LIBRARY 
             NAMES scotcherrexit
	     PATHS ${SCOTCH_LIBDIR} ${SCOTCH_LIB_DIR} 
	     )

include(FindPackageHandleStandardArgs)
# handle the QUIETLY and REQUIRED arguments and set SCOTCH_FOUND to TRUE
# if all listed variables are TRUE
find_package_handle_standard_args(SCOTCH  DEFAULT_MSG
                                  SCOTCH_LIBRARY SCOTCHERREXIT_LIBRARY SCOTCH_INCLUDE_DIR)

mark_as_advanced(SCOTCH_INCLUDE_DIR SCOTCH_LIBRARY SCOTCHERREXIT_LIBRARY )

set(SCOTCH_LIBRARIES ${SCOTCH_LIBRARY} )
set(SCOTCHERREXIT_LIBRARIES ${SCOTCHERREXIT_LIBRARY} )
set(SCOTCH_INCLUDE_DIRS ${SCOTCH_INCLUDE_DIR} )

