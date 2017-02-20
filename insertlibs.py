#!/bin/python

import sys

with open(sys.argv[1]) as cmake_file:
    cmake_in = cmake_file.readlines()

linker_lines = filter(lambda x: x.startswith('target_link_libraries'), cmake_in)

if len(linker_lines) == 0:
    has_linker = False
else:
    has_linker = True

with open(sys.argv[1], 'w') as cmake_file:
    if has_linker:
        for line in cmake_in:
            if line.startswith('target_link_libraries'):
                if line.find('OpenFOAM dl m') >= 0:
                    cmake_file.write(line)
                else:
                    cmake_file.write(line.replace(')', 'OpenFOAM dl m )'))
            else:
                cmake_file.write(line)
    else:
        libs_written = False
        for line in cmake_in:
            if line.startswith('include_directories') and libs_written == False:
                cmake_file.write('target_link_libraries( ${EXE_NAME} OpenFOAM dl m )\n\n')
                cmake_file.write(line)
                libs_written = True
            else:
                cmake_file.write(line)
