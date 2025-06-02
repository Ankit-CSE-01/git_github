#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <functional>

using namespace std;

typedef pair<int, int> pii;

class Graph {
    int V; // Number of vertices
    vector<vector<pii>> adj; // Adjacency list

public:
    Graph(int V);
    void addEdge(int u, int v, int weight);
    void bestFirstSearch(int start, int goal);
};

Graph::Graph(int V) {
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int u, int v, int weight) {
    adj[u].push_back(make_pair(v, weight));
    adj[v].push_back(make_pair(u, weight)); // For undirected graph
}

void Graph::bestFirstSearch(int start, int goal) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<bool> visited(V, false);

    pq.push(make_pair(0, start));
    visited[start] = true;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        cout << "Visiting node " << u << endl;

        if (u == goal) {
            cout << "Goal node " << goal << " found!" << endl;
            return;
        }

        for (auto &neighbor : adj[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            if (!visited[v]) {
                visited[v] = true;
                pq.push(make_pair(weight, v));
            }
        }
    }

    cout << "Goal node " << goal << " not reachable from start node " << start << endl;
}

int main() {
    Graph g(5);

    g.addEdge(0, 1, 2);
    g.addEdge(0, 2, 4);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 7);
    g.addEdge(2, 4, 3);
    g.addEdge(3, 4, 1);

    int start = 0;
    int goal = 4;

    g.bestFirstSearch(start, goal);

    return 0;
}

