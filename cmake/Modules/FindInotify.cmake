# - Try to find Inotify
# Once done this will define
#  Inotify_FOUND - System has Inotify 
#  Inotify_INCLUDE_DIRS - The Inotify include directories
#  Inotify_LIBRARIES - The libraries needed to use Inotify
#  Inotify_DEFINITIONS - Compiler switches required for using Inotify

find_package(PkgConfig)
pkg_check_modules(Inotify QUIET inotify)
set(Inotify_DEFINITIONS ${Inotify_CFLAGS_OTHER})

find_path(Inotify_INCLUDE_DIR sys/inotify.h
	  PATH_SUFFIXES inotify
          )

  # find_library(Inotify_LIBRARY inotify
  #              PATH_SUFFIXES lib/inotify
  # 	     )

include(FindPackageHandleStandardArgs)
# handle the QUIETLY and REQUIRED arguments and set Inotify_FOUND to TRUE
# if all listed variables are TRUE
find_package_handle_standard_args(Inotify  DEFAULT_MSG Inotify_INCLUDE_DIR)

mark_as_advanced(Inotify_INCLUDE_DIR Inotify_LIBRARY )

set(Inotify_LIBRARIES ${Inotify_LIBRARY} )
set(Inotify_INCLUDE_DIRS ${Inotify_INCLUDE_DIR} )

