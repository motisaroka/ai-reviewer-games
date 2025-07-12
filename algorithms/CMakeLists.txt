add_library(algorithms
    Fibonacci.cpp
    QuickSort.cpp
    BinarySearch.cpp
    Dijkstra.cpp
)

target_include_directories(algorithms PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

