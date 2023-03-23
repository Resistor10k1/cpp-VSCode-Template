# CMakeList.txt : CMake project for cppTemplate, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.14)

# Building instructions for the unit-tests.
set(TARGET_NAME testcppTemplate)

# Add source to this project's executable.
add_executable(${TARGET_NAME} "unittest_main.cpp" "Module.cpp")

target_include_directories(${TARGET_NAME} PRIVATE "${PROJECT_SOURCE_DIR}/include")

# for google-test
#DOWNLOAD_EXTRACT_TIMESTAMP true
include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/837f2229a905f44678fd6dc9af83f9a9f08e4a8f.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed.
target_link_libraries(${TARGET_NAME} gtest_main)
add_test(NAME cppTemplate_test COMMAND cppTemplate)


# Building instructions for the application
set(TARGET_NAME cppTemplate)

# Add source to this project's executable.
add_executable(${TARGET_NAME} "main.cpp" "Module.cpp")

target_include_directories(${TARGET_NAME} PRIVATE "${PROJECT_SOURCE_DIR}/include")


