# Kruskal's Minimum Spanning Tree Algorithm

## What is a Minimum Spanning Tree ?
A minimum spanning tree is a subset of the edges of a connected, edge-weighted undirected graph that connects all the vertices together, without any cycles and with the minimum possible total edge weight.

## Kruskal's Algorithm
Kruskal's Algorithm is a greedy algorithm which is used to find the minimum spanning tree for a connected weighted graph. This algorithm basically finds the subset of edges by using which we can traverse every vertex of the graph.

## Working of Kruskal's Algorithm

Step 1: First, sort all the edges from low weight to high.

Step 2: Now, take the edge with the lowest weight and add it to the spanning tree. If the edge to be added creates a cycle, then reject the edge.

Step 3: Continue to add the edges until we reach all vertices, and a minimum spanning tree is created.