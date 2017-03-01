#!/bin/python

import os

for root, directory, files in os.walk(os.getcwd()):
    if 'CMakeLists.txt' in files:
        filename = os.path.join(root, 'CMakeLists.txt')
        with open(filename) as fh:
            contents = fh.readlines()
        library_lines = filter(lambda x: x.find('add_library') > -1, contents)
        if len(library_lines) > 0:
            with open(filename, 'w') as fh:
                for line in contents:
                    if line.find('add_library') > -1:
                        fh.write(line)
                        fh.write('install( TARGETS %s DESTINATION lib )' % libname)
                    else:
                        fh.write(line)

