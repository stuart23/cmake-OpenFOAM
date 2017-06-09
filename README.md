# cmake-OpenFOAM

OpenFOAM taken from the OF repo https://github.com/OpenFOAM and adapted to use the CMake build system

This build currently builds with all OF features, and therefore the dependancies are not optional. The dependancies needed (on a machine with dnf) can be resolved with: "sudo dnf install gcc-c++ python3-devel openmpi-devel boost-devel metis-devel CGAL-devel scotch-devel ptscotch-openmpi-devel". 

There is also a dependancy on Zoltan, which does not exist in any dnf repos and has to be built from source. Zoltan can be downloaded from: http://www.cs.sandia.gov/Zoltan/Zoltan_download.html  

dnf currently installs Open-MPI into a non-system path, and therefore cmake is unable to find it. So that cmake can find it, add the Open-MPI directory to the path (provided /usr/lib64/openmpi/bin is the installed location of Open-MPI): "export PATH=$PATH:/usr/lib64/openmpi/bin"
 
Building OpenFOAM using this build environment is much simpler than the official build. The steps are as follows:

1. Clone this repository.
2. From a seperate build directory type `ccmake path/to/cloned/source`
3. Change the CMAKE_INSTALL_PREFIX to a location you want to install OpenFOAM then configure (c) and generate (g) the code from ccmake.
4. Type `make -j4 && make install` (this will build in parallel on 4 processors. It can be built in serial by omitting the -j4 argument.

The build tools used to build this release of OpenFOAM are much more modern than that of the official OpenFOAM repo. One of the benefits of this is that there is no need to source any bash scripts or use bash variables for anything. All binaries and libraries are linked using RPATHs, and the configuration files are installed with paths configured by cmake. 

This also means that OpenFOAM can be downloaded to any directory, built from any directory, and installed to any directory without having to mess around with bash scripts etc.
