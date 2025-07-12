cmake_minimum_required(VERSION 3.16)
project(AlgorithmsDemo)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(algorithms)

add_executable(main main.cpp)
target_link_libraries(main algorithms)

