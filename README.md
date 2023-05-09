# cpp-VSCode-Template

This repository serves as a starting point to a C++ project. If some parts are not used, e.g. the library in folder **lib**, this parts can simply be deleted. The **CMakeLists.txt** in the project directory has to be modified accordingly.

## What to change to use the template

### CMakeLists

CMakeLists are used for compiling the code. For the CMakeLists to work with your project, update the application names accordingly.

### VS-Code launch configuration

In the VS-Code launch configurations only the application and building target need to be changed, according to CMakeLists.

### Source files and include files

Of course the class names, functions and files need to be named suitable for your project. New source files have to be added to the compilation list in the **CMakeLists.txt** in the source directory.

### Unit-tests

If new unit-tests are added, the list of sources and unit-tests in **unittests/CMakeLists.txt** has to be updated.

### Library

In the folder **lib** an example library can be found. The library is compiled as a dynamically linked library. To change that, line 11 in **lib/CMakeLists.txt** the keyword *SHARED* has to be changed. Other possible types of libraries are *STATIC* or *OBJECT*.

### Files for documentation

For documenting the code, html files are generated with doxygen. Only a few changes on the config-file are necessary. Following modification need to be made in the **doc/doygen/doxygenConfig** file:
- Set correct project name: line 45

This modifications can also be made with the Doxywizard.
