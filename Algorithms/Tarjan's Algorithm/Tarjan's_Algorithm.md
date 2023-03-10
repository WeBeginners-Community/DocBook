# Tarjan’s Algorithm
## Problem Statement
A directed graph is strongly connected if there is a path between all pairs of vertices. A strongly connected component (**SCC**) of a directed graph is a maximal strongly connected subgraph.

Tarjan Algorithm is based on the following facts: 

- DFS search produces a DFS tree/forest .
- Strongly Connected Components form subtrees of the DFS tree. 
- If we can find the head of such subtrees, we can print/store all the nodes in that subtree and that will be one SCC. 
- There is no back edge from one SCC to another.

To find the head of an SCC, we calculate the disc and low array where low[u] indicates the earliest visited vertex (the vertex with minimum discovery time) that can be reached from a subtree rooted with u. A node u is head if disc[u] = low[u].

To solve the problem follow the below idea:

Strongly Connected Component relates to directed graph only, but Disc and Low values relate to both directed and undirected graph.

```
Disc: This is the time when a node is visited 1st time while DFS traversal. 

Low: In the DFS tree, Tree edges take us forward, from the ancestor node to one of its descendants. Back edges take us backward, from a descendant node to one of its ancestors. 
```

- **Case 1 (Tree Edge):** If node v is not visited already, then after the DFS of v is complete, a minimum of low[u] and low[v] will be updated to low[u]. 
low[u] = min(low[u], low[v]);

- **Case 2 (Back Edge):** When child v is already visited, then a minimum of low[u] and Disc[v] will be updated to low[u]. 
low[u] = min(low[u], disc[v]);

To track the subtree rooted at the head, we can use a stack (keep pushing the node while visiting). When a head node is found, pop all nodes from the stack till you get the head out of the stack. To make sure, we don’t consider cross edges, when we reach a node that is already visited, we should process the visited node only if it is present in the stack, or else ignore the node.

**Time Complexity:** O(V+E)

**Auxiliary Space:** O(V)