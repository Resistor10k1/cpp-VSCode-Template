# cpp-VSCode-Template

## What to change to use the template

### CMakeLists
CMakeLists are used for compiling the code. For the CMakeLists to work with your project, update the application names accordingly.

### VS-Code launch configuration
In the VS-Code launch configurations only the application and building target need to be changed, according to CMakeLists.

### Source files and include files
Of course the class names, functions and files need to be named suitable for your project. New source files have to be added to the compilation list in the CMakeLists.txt in the source directory.

### Files for documentation
For documenting the code, html files are generated with doxygen. That the config-file for doxygen is working properly, some paths need to be modified. Following modification need to be made in the doc/doygen/doxygenConfig file:
- Configure the correct output path for the documentation files: Change line 71
- Configure the correct input path for the documentation to be generated of: Change line 920
- If images are used in the documentation: Change line 1075

This modifications can also be made with the Doxywizard.
