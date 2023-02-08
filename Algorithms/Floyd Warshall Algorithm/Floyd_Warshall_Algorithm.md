# Floyd Warshall Algorithm

## Problem Statement
The **Floyd Warshall** Algorithm is for solving all pairs of shortest-path problems. The problem is to find the shortest distances between every pair of vertices in a given edge-weighted directed Graph. 

Example:

```
Input:  graph[][] = {{ 0,   5,  INF, 10},
                     {INF,  0,   3,  INF},
                     {INF, INF,  0,    1},
                     {INF, INF, INF,  0}}

Output: Shortest distance matrix
     0      5      8     9
    INF     0      3     4
    INF    INF     0     1 
    INF    INF    INF    0
```

## Floyd Warshall Algorithm:
- Initialize the solution matrix same as the input graph matrix as a first step. 
- Then update the solution matrix by considering all vertices as an intermediate vertex. 
- The idea is to one by one pick all vertices and updates all shortest paths which include the picked vertex as an intermediate vertex in the shortest path. 
- When we pick vertex number k as an intermediate vertex, we already have considered vertices {0, 1, 2, .. k-1} as intermediate vertices. 
- For every pair (i, j) of the source and destination vertices respectively, there are two possible cases. 
    - k is not an intermediate vertex in shortest path from i to j. We keep the value of dist[i][j] as it is. 
    - k is an intermediate vertex in shortest path from i to j. We update the value of dist[i][j] as dist[i][k] + dist[k][j] if dist[i][j] > dist[i][k] + dist[k][j].

**Time Complexity:** O(V3)

**Auxiliary Space:** O(V2)