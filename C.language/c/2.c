#include <stdio.h>

#define MAX_VERTICES 100

int max_graph(int graph[][MAX_VERTICES], int num_vertices) {
    int max_value = 0;
    for (int i = 0; i < num_vertices; i++) {
        for (int j = 0; j < num_vertices; j++) {
            if (graph[i][j] > max_value) {
                max_value = graph[i][j];
            }
        }
    }
    return max_value;
}

int main() {
    int graph[][MAX_VERTICES] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };
    int num_vertices = 5;
    int max_value = max_graph(graph, num_vertices);
    printf("Maximum value in the graph: %d\n", max_value);
    return 0;
}