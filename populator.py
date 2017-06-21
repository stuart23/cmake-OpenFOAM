import os

for root, dirs, files in os.walk('.'):
    if root == 'include':
        continue

    if 'CMakeLists.txt' in files:
        cmake_file = os.path.join(root, 'CMakeLists.txt')
        breaker = False
        with open(cmake_file) as cmake:
            contents= cmake.readlines()
            for line in contents:
                if 'src/OpenFOAM/fields/Fields' in line:
                    breaker = True
                    break
        if breaker: continue

        with open(cmake_file, 'w') as cmake:
            for line in contents:
                if 'src/OpenFOAM/primitives/ops' in line:
                    cmake.write(line)
                    cmake.write('include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields )\n')
                else:
                    cmake.write(line)
