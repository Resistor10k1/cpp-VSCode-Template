# CMakeList.txt : CMake project for cppTemplate, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.14)

project(templateLib)

set(SOURCES "templateLib.cpp")

# Build library
add_library(templateLib SHARED "src/${SOURCES}")

# PUBLIC needed to make both hello.h and hello library available elsewhere in project
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_DIR}/include")