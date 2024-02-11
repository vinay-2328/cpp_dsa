#include <iostream>
#include <limits>
#define V 6 // Number of vertices in the graph
using namespace std;

// Function to find the minimum key vertex from the set of vertices not yet included in MST
int findMinKey(int key[], bool mstSet[]) {
    int min = numeric_limits<int>::max();
    int min_index;
    for (int v = 0; v < V; v++) {
        if (mstSet[v] == false && key[v] < min) {
            min = key[v];
            min_index = v;
        }
    }
    return min_index;
}
// Function to perform Prim's algorithm to find the Minimum Spanning Tree (MST)
void primMST(int graph[V][V], int parent[]) {
    int key[V];
    bool mstSet[V];
    for (int i = 0; i < V; i++) {
        key[i] = std::numeric_limits<int>::max();
        mstSet[i] = false;
    }
    key[0] = 0;
    parent[0] = -1;
    for (int count = 0; count < V - 1; count++) {
        int u = findMinKey(key, mstSet);
        mstSet[u] = true;
        for (int v = 0; v < V; v++) {
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
}
// Function to print the preorder traversal of the Minimum Spanning Tree
void printPreorderTraversal(int parent[]) {
    std::cout << "The preorder traversal of the tree is found to be − ";
    for (int i = 1; i < V; i++) {
        std::cout << parent[i] << " → ";
    }
    std::cout << std::endl;
}
// Main function for the Traveling Salesperson Approximation Algorithm
void tspApproximation(int graph[V][V]) {
    int parent[V];
    int root = 0; // Choosing vertex 0 as the starting and ending point
    // Find the Minimum Spanning Tree using Prim's Algorithm
    primMST(graph, parent);
    // Print the preorder traversal of the Minimum Spanning Tree
    printPreorderTraversal(parent);
    // Print the Hamiltonian path (preorder traversal with the starting point added at the end)
    std::cout << "Adding the root node at the end of the traced path ";
    for (int i = 0; i < V; i++) {
        std::cout << parent[i] << " → ";
    }
    std::cout << root << " → " << parent[0] << std::endl;
    // Calculate and print the cost of the Hamiltonian path
    int cost = 0;
    for (int i = 1; i < V; i++) {
        cost += graph[parent[i]][i];
    }
    // The cost of the path would be the sum of all the costs in the minimum spanning tree.
    std::cout << "Sum of all the costs in the minimum spanning tree: " << cost << "." << std::endl;
}
int main() {
    // Example graph represented as an adjacency matrix
    int graph[V][V] = {
        {0, 3, 1, 6, 0, 0},
        {3, 0, 5, 0, 3, 0},
        {1, 5, 0, 5, 6, 4},
        {6, 0, 5, 0, 0, 2},
        {0, 3, 6, 0, 0, 6},
        {0, 0, 4, 2, 6, 0}
    };
    tspApproximation(graph);
    return 0;
}