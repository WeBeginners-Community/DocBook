# Prim's Minimum Spanning Tree Algorithm

## What is a Minimum Spanning Tree ?
A minimum spanning tree is a subset of the edges of a connected, edge-weighted undirected graph that connects all the vertices together, without any cycles and with the minimum possible total edge weight.

## Prim's Algorithm

Prim’s algorithm is a Greedy algorithm that always starts with a single node and moves through several adjacent nodes, in order to explore all of the connected edges along the way.

## Working of Prim's Algorithm

The steps to implement the prim's algorithm are given as follows -

Step 1: Firstly, Initialize an MST with the randomly chosen vertex.

Step 2: Now, Find all the edges that connect the tree in the above step with the new vertices. From the edges found, 
select the minimum edge and add it to the tree.

Step 3: Repeat step 2 until the minimum spanning tree is formed.

