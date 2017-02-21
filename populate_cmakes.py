#!/bin/python

import os

root = os.getcwd()

def walker(directory):
    contents = os.listdir(directory)
    if 'Make' in contents:
        return
    else:
        dirs = filter(lambda x: os.path.isdir(os.path.join(directory, x)), contents)
        with open(os.path.join(directory,'CMakeLists.txt'), 'w') as cmake:
            for adir in dirs:
                cmake.write('add_subdirectory( %s )\n' % adir)
        for adir in dirs:
            walker(os.path.join(directory, adir))

walker(root)
