#!/bin/python
import sys
import os

started = False
source_files = []
with open(sys.argv[1]) as cmake_file:
    for line in cmake_file.readlines():
        if line.find('SOURCES') > 0:
            started = True
        elif started and (line.find(')') > -1):
            break
        elif started:
            source_files.append(line.strip())

source_files = filter(lambda x: len(x) > 1, source_files)


def readIncludes(filename):
    include_files = []
    with open(filename) as source_file:
        for line in source_file.readlines():
            if (line.find('#') >= 0) and (line.find('include') > 0):
                header_file = filter(lambda a: a.find('.H') > 0 or a.find('.h') > 0 or a.find('.C') > 0 , line.split())
                include_files += header_file
        include_files = [a.replace('"','') for a in include_files]
    return include_files

def findFile(filename):
    for root, directory, files in os.walk(os.getcwd()):
        if filename in files:
            return('include_directories( %s )' % root.replace('/home/stuart/Documents/cmake-OpenFOAM/cmake-OpenFOAM','${CMAKE_SOURCE_DIR}'),
                os.path.join(root, filename))
    for root, directory, files in os.walk('/home/stuart/Documents/cmake-OpenFOAM/cmake-OpenFOAM/src'):
        if filename in files:
            return('include_directories( %s )' % root.replace('/home/stuart/Documents/cmake-OpenFOAM/cmake-OpenFOAM','${CMAKE_SOURCE_DIR}'),
                os.path.join(root, filename))
    for root, directory, files in os.walk(os.path.abspath(os.path.join(os.getcwd(),'..'))):
        if filename in files:
            return('include_directories( %s )' % root.replace('/home/stuart/Documents/cmake-OpenFOAM/cmake-OpenFOAM','${CMAKE_SOURCE_DIR}'),
                os.path.join(root, filename))
    for root, directory, files in os.walk('/home/stuart/Documents/cmake-OpenFOAM/cmake-OpenFOAM/applications'):
        if filename in files:
            return('include_directories( %s )' % root.replace('/home/stuart/Documents/cmake-OpenFOAM/cmake-OpenFOAM','${CMAKE_SOURCE_DIR}'),
                os.path.join(root, filename))

def walkFile(filename, scanned_files, depth):
    includes = readIncludes(filename)
    #print('. '*depth + filename + ' CONTAINS ' + ','.join(includes))
    directories = []
    if len(includes) == 0:
        return ['', scanned_files]
    else:
        for filename in includes:
            if filename not in scanned_files:
                scanned_files.append(filename)
                paths = findFile(filename)
                if paths > 0:
                    #print '. '*depth + 'FOUND %s' % paths[1]
                    directories.append(paths[0])
                    [ new_directories, scanned_files ] = walkFile(paths[1], scanned_files, depth + 1)
                    directories += new_directories
            #else:
                #print '. '*depth + "%s ALREADY SCANNED %i files" % ( filename, len(scanned_files))
        return [filter(lambda x: len(x) > 1, directories), scanned_files]

all_includes = []
scanned_files = []
for filename in source_files:
    [new_includes, scanned_files] = walkFile(filename, scanned_files, 0)
    all_includes += new_includes
unique_includes = list(set(all_includes))
unique_includes.sort()

print '\n'.join(unique_includes)
