# CMakeList.txt : CMake project for CircuitAnalyzer, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.14)

set(TEST_SOURCES 
    "unittest_Module.cpp")

set(LIB templateLib)

set(TARGET_NAME testcppTemplate)

file(GLOB test_targets
          #"${PROJECT_SOURCE_DIR}/source/main.cpp"
          "${PROJECT_SOURCE_DIR}/source/Module.cpp")

# Add source to this project's executable.
add_executable(${TARGET_NAME} ${TEST_SOURCES} ${test_targets})

target_include_directories(${TARGET_NAME} PRIVATE "${PROJECT_SOURCE_DIR}/include")
target_link_libraries(${TARGET_NAME} ${LIB})

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

