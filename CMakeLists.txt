# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.14)

project(cpp-VSCode-Template
        VERSION 1.0
        DESCRIPTION "A template for C++ projects.")

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}")

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_DEBUG")
if(NOT WIN32)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")	# pthread is needed
endif()

# Include sub-projects.
add_subdirectory(source)
add_subdirectory(unittests)
add_subdirectory(lib)

