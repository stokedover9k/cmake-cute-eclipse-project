Cute CMake Eclipse Project (CCMEP)
==================================

CCMEP is a template for a project.  This project has the following characteristics:
- C/C++ project
- CMake build system
- Compatibility with Eclipse CDT
- CUTE unit testing framework

An Eclipse + CMake Tutorial which inspired CCMEP can be found here: http://www.vtk.org/Wiki/Eclipse_CDT4_Generator

----------------------------------

Set Up
======

Create a 'build' directory as a sibling of the 'src' directory.
- $ mkdir build
- $ ls            # -> build README.md src
- $ cd build

Initialize the build system as an Eclipse project.
- $ cmake -G"Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug ../src

Import the project into Eclipse as "Existing Projects into Workspace" (use the 'build' directory as project root).
