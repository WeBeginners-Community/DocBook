# Dijkstra's Algorithm
Dijkstra's algorithm is an algorithm for finding the shortest paths between nodes in a graph, which may represent, for example, road networks.

It can also be used for finding the shortest paths from a single node to a single destination node by stopping the algorithm once the shortest path to the destination node has been determined.

## Algorithm Steps :

### Step 1:
Start with a weighted graph.

### Step 2:
Choose a starting vertex and assign infinity path values to all other devices.

### Step 3:
Go to each vertex and update its path length.

### Step 4:
If the path length of the adjacent vertex is lesser than new path length, don't update it.

### Step 5:
Avoid updating path lengths of already visited vertices.

### Step 6:
After each iteration, we pick the unvisited vertex with the least path length. So we choose 5 before 7.

### Step 7: 
Repeat until all the vertices had been visited.

## PSEUDOCODE:

```
function dijkstra(G, S)
    for each vertex V in G
        distance[V] <- infinite
        previous[V] <- NULL
        If V != S, add V to Priority Queue Q
    distance[S] <- 0
	
    while Q IS NOT EMPTY
        U <- Extract MIN from Q
        for each unvisited neighbour V of U
            tempDistance <- distance[U] + edge_weight(U, V)
            if tempDistance < distance[V]
                distance[V] <- tempDistance
                previous[V] <- U
    return distance[], previous[]

```



