#include <iostream>
#include <vector>
using namespace std;

// Function to add an edge to the graph
void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v); // Add v to u's list
    adj[v].push_back(u); // Add u to v's list (for undirected graph)
}

// Function to print the adjacency list of the graph
void printGraph(vector<int> adj[], int V) {
    for (int v = 0; v < V; v++) {
        cout << v << ": ";
        for (auto x : adj[v])
            cout << x << " ";
        cout << endl;
    }
}

int main() {
    int V = 5; // Number of vertices

    // Create an array of vectors
    vector<int> adj[V];

    // Add edges
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    // Print adjacency list representation of the graph
    printGraph(adj, V);

    return 0;
}
