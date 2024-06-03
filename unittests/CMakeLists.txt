# CMakeList.txt : CMake project for unit tests, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.27)

set(TEST_SOURCES 
    "unittest_Module.cpp"
)

set(LIB templateLib)

set(TARGET_NAME testcppTemplate)

file(GLOB test_targets
          "${PROJECT_SOURCE_DIR}/source/Module.cpp"
)

# Add source to this project's executable.
add_executable(${TARGET_NAME}
    ${TEST_SOURCES}
    ${test_targets}
)

target_include_directories(${TARGET_NAME} PRIVATE "${PROJECT_SOURCE_DIR}/include")
target_link_libraries(${TARGET_NAME} PRIVATE ${LIB})


# Now simply link against gtest or gtest_main as needed.
target_link_libraries(${TARGET_NAME} PRIVATE gtest_main gmock)
add_test(NAME ${TARGET_NAME} COMMAND "${TARGET_NAME}")

