# Bellman Ford Algoithm

It is an algorithm for directed graph.It is a single source shortest path algorithm.
Dijkstra doesn’t work for Graphs with negative weights, Bellman-Ford works for such graphs.

## Steps:
### Step 1: 
Let the given source vertex be 0. Initialize all distances as infinite, except the distance to the source itself. Total number of vertices in the graph is V, so all edges must be processed |V-1| times.

### Step 2:
Relax all edges |V| - 1 times. A simple shortest path from src to any other vertex can have at-most |V| - 1 edges

### Step 3:
Check for negative-weight cycles.  The above
 step guarantees shortest distances if graph doesn't
 contain negative weight cycle.