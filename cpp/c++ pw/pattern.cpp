//Algorithm for DFS
#include<iostream>
using namespace std;

int main(){
    //Algorithm for DFS
    int graph[5][5] = {{0, 1, 0, 0, 1},
                       {1, 0, 1, 1, 1},
                       {0, 1, 0, 1, 0},
                       {0, 1, 1, 0, 1},
                       {1, 1, 0, 1, 0}};
    int visited[5] = {0, 0, 0, 0, 0};
    int n = 5;

    void dfs(int vertex) {
        visited[vertex] = 1;
        cout << vertex << " ";
        for (int i = 0; i < n; i++) {
            if (graph[vertex][i] == 1 && visited[i] == 0) {
                dfs(i);
            }
        }
    }

    dfs(0);
    return 0;
} 