#!/bin/python
make_files = []
make_options = []
with open('Make/files') as files:
    make_files = files.readlines()
with open('Make/options') as options:
    make_options = options.readlines()

sources = []
for line in make_files:
    if line.find('EXE') >= 0:
        target_name = line.split('/')[-1].strip()
    else:
        sources.append(line.strip())

sources = filter(lambda x: len(x) > 1, sources)

libs = []
for line in make_options:
    if line.strip().startswith('-l'):
        libs.append(line.replace('\\', '').strip().replace('-l',''))

with open('CMakeLists.txt', 'w') as cmake:
    cmake.write('set( EXE_NAME %s )\n' % target_name)
    cmake.write('\n')
    cmake.write('set( SOURCES\n')
    cmake.write('\n')
    for source in sources:
        cmake.write('%s\n' % source)
    cmake.write('\n')
    cmake.write(')\n')
    cmake.write('\n')
    cmake.write('## Define the output\n')
    cmake.write('add_executable( ${EXE_NAME} ${SOURCES} )\n')
    cmake.write('\n')
    if len(libs) > 0:
        cmake.write('target_link_libraries( ${EXE_NAME} %s )\n' % ' '.join(libs))
        cmake.write('\n')

