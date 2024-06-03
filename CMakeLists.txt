# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.27)

project(cpp-VSCode-Template
    VERSION 0.1
    DESCRIPTION "A template for C++ projects."
)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20) 
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(NOT WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")	# pthread is needed
endif()


if(${CMAKE_BUILD_TYPE} STREQUAL "RelWithDebInfo")

    # for google-test
    include(FetchContent)
    FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest
        GIT_TAG v1.14.0
    )
    # For Windows: Prevent overriding the parent project's compiler/linker settings
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)

    enable_testing()
    add_subdirectory(unittests)
endif()

# Include sub-projects.
add_subdirectory(source)
add_subdirectory(lib)

