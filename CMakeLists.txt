cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Facade)

option(BUILD_TESTS "Build tests" ON)

set(SOURCE_FILES
    Facade/ConceptualExample.cpp
    Facade/Program.cpp
)

add_library(Facade STATIC ${SOURCE_FILES})

add_executable(my_exe ${SOURCE_FILES})

target_include_directories(Facade PUBLIC Facade)

if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(third-party/gtest)
    add_executable(check tests/test.cpp)
    target_link_libraries(check
        gtest_main
        Facade
    )
    add_test(NAME check COMMAND check)
endif()

include(CPack.cmake)
