cmake_minimum_required(VERSION 3.27)
project(
    lesson4
    VERSION 1.0
    DESCRIPTION "Second project"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Release)
add_executable(practica_1)




set(sources
   main.cpp
)

target_sources(practica_1 PRIVATE ${sources})