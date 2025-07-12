#include "Dijkstra.h"
#include <limits>

std::vector<int> Dijkstra::shortestPath(const std::vector<std::vector<int>>& graph, int src) 
{
    int n = graph.size();
    std::vector<int> dist(n, std::numeric_limits<int>::max());
    std::vector<bool> visited(n, false);
    dist[src] = 0;

    for (int i = 0; i < n - 1; ++i) 
    {
        int u = -1, minDist = std::numeric_limits<int>::max();
        for (int j = 0; j < n; ++j)
        {
            if (!visited[j] && dist[j] < minDist) 
            {
                minDist = dist[j];
                u = j;
            }
        }
        if (u == -1) 
        {
            break;
        }

        visited[u] = true;
        for (int v = 0; v < n; ++v)
        {
            if (graph[u][v] && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
        }
    }
    return dist;
}

