#include <iostream>
#include "Fibonacci.h"
#include "QuickSort.h"
#include "BinarySearch.h"
#include "Dijkstra.h"

int main() {
    std::cout << "Fibonacci(10): " << Fibonacci().compute(10) << std::endl;

    std::vector<int> arr = {5, 2, 9, 1, 7};
    QuickSort().sort(arr, 0, arr.size() - 1);
    std::cout << "Sorted: ";
    for (int v : arr) std::cout << v << ' ';
    std::cout << std::endl;

    int idx = BinarySearch().search(arr, 7);
    std::cout << "Index of 7: " << idx << std::endl;

    Dijkstra dijkstra;
    std::vector<std::vector<int>> graph = {
        {0, 1, 4, 0},
        {1, 0, 2, 6},
        {4, 2, 0, 3},
        {0, 6, 3, 0}
    };
    auto dist = dijkstra.shortestPath(graph, 0);
    std::cout << "Dijkstra distances from 0: ";
    for (int d : dist) std::cout << d << ' ';
    std::cout << std::endl;

    return 0;
}


