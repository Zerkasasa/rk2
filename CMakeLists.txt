cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Facade)

set(SOURCE_FILES
    Facade/ConceptualExample.cpp
    Facade/Program.cpp
)

add_library(Facade STATIC ${SOURCE_FILES})

add_executable(my_exe ${SOURCE_FILES})


