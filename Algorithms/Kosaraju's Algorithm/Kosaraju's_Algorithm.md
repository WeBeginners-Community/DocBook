# Kosaraju's Algorithm (Strongly Connected Components)

## Problem Statement
A directed graph is strongly connected if there is a path between all pairs of vertices. A strongly connected component (**SCC**) of a directed graph is a maximal strongly connected subgraph.


Following is detailed Kosaraju’s algorithm.

1. Create an empty stack and do DFS traversal of a graph. In DFS traversal, after calling recursive DFS for adjacent vertices of a vertex, push the vertex to stack.

2. Reverse directions of all arcs to obtain the transpose graph.

3. One by one pop a vertex from stack while stack is not empty. Let the popped vertex be ‘v’. Take v as source and do DFS. The DFS starting from v prints strongly connected component of v.

## How does this work?

This algorithm is DFS based. It does DFS two times. DFS of a graph produces a single tree if all vertices are reachable from the DFS starting point. Otherwise DFS produces a forest. So DFS of a graph with only one SCC always produces a tree. The important point to note is DFS may produce a tree or a forest when there are more than one SCCs depending upon the chosen starting point.

However, if we do a DFS of graph and store vertices according to their finish times, we make sure that the finish time of a vertex that connects to other SCCs, will always be greater than finish time of vertices in the other SCC.

In the next step, we reverse the graph. Consider the graph of SCCs. In the reversed graph, the edges that connect two components are reversed. So if we do a DFS of the reversed graph using sequence of vertices in stack, we process vertices from sink to source. That is what we wanted to achieve and that is all needed to print SCCs one by one. 