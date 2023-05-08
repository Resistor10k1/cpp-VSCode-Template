# CMakeList.txt : CMake project for cppTemplate, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.14)

set(COMMON_SOURCES "Module.cpp")
set(APP_SOURCES "main.cpp")
set(LIB templateLib)

# Building instructions for the application ===========================================================
set(TARGET_NAME cppTemplate)

# Add source to this project's executable.
add_executable(${TARGET_NAME} ${APP_SOURCES} ${COMMON_SOURCES})

target_include_directories(${TARGET_NAME} PRIVATE "${PROJECT_SOURCE_DIR}/include")

target_link_libraries(${TARGET_NAME} PRIVATE ${LIB})
