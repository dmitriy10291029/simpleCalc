include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
    simple_calc_tests
    simple_calc_tests.cpp
)

target_link_libraries(
    simple_calc_tests
    calculus
    GTest::gtest_main
)

target_include_directories(simple_calc_tests PUBLIC ${PROJECT_SOURCE_DIR})

include(GoogleTest)

gtest_discover_tests(simple_calc_tests)