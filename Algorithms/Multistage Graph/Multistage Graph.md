 • INTRODUCTION
 
 A Multistage graph is a directed, weighted graph in which the nodes can be divided into a set of stages such that all edges are from a stage to next stage only 
 
 (In other words there is no edge between vertices of same stage and from a vertex of current stage to previous stage).
 
 • EXAMPLE
 
![image](https://user-images.githubusercontent.com/59620280/214791805-2f2609e3-ce72-457f-98e9-f4fcd21db03a.png)

            According to the formula, we have to calculate the cost (i, j) using the following steps

            Step-1: Cost (K-2, j)
            In this step, three nodes (node 4, 5. 6) are selected as j. Hence, we have three options to choose the minimum cost at this step.

            Cost(3, 4) = min {c(4, 7) + Cost(7, 9),c(4, 8) + Cost(8, 9)} = 7

            Cost(3, 5) = min {c(5, 7) + Cost(7, 9),c(5, 8) + Cost(8, 9)} = 5

            Cost(3, 6) = min {c(6, 7) + Cost(7, 9),c(6, 8) + Cost(8, 9)} = 5

            Step-2: Cost (K-3, j)
            Two nodes are selected as j because at stage k - 3 = 2 there are two nodes, 2 and 3. So, the value i = 2 and j = 2 and 3.

            Cost(2, 2) = min {c(2, 4) + Cost(4, 8) + Cost(8, 9),c(2, 6) +

            Cost(6, 8) + Cost(8, 9)} = 8

            Cost(2, 3) = {c(3, 4) + Cost(4, 8) + Cost(8, 9), c(3, 5) + Cost(5, 8)+ Cost(8, 9), c(3, 6) + Cost(6, 8) + Cost(8, 9)} = 10

            Step-3: Cost (K-4, j)
            Cost (1, 1) = {c(1, 2) + Cost(2, 6) + Cost(6, 8) + Cost(8, 9), c(1, 3) + Cost(3, 5) + Cost(5, 8) + Cost(8, 9))} = 12

            c(1, 3) + Cost(3, 6) + Cost(6, 8 + Cost(8, 9))} = 13

Hence, the path having the minimum cost is 1→ 3→ 5→ 8→ 9.

• ALGORITHM

        Algorithm MULTI_STAGE(G, k, n, p)
        // Description: Solve multi-stage problem using dynamic programming

        // Input:
        k: Number of stages in graph G = (V, E)
        c[i, j]:Cost of edge (i, j)

        // Output: p[1:k]:Minimum cost path

        cost[n] ← 0
        for j ← n – 1 to 1 do
        //Let r be a vertex such that (j, r) in E and c[j, r] + cost[r] is minimum
        cost[j] ← c[j, r] + cost[r]
        π[j] ← r
        end

        //Find minimum cost path
        p[1] ← 1
        p[k] ← n

        for j ← 2 to k - 1 do
          p[j] ← π[p[j - 1]]
        end
        
• CODE

    #include<bits/stdc++.h>
    using namespace std;
 
    #define N 8
    #define INF INT_MAX
 

    int shortestDist(int graph[N][N]) {
 
    
    int dist[N];
 
    dist[N-1] = 0;
 
    
    for (int i = N-2 ; i >= 0 ; i--)
    {
 
        
        dist[i] = INF;
 
        
        for (int j = i ; j < N ; j++)
        {
            
            if (graph[i][j] == INF)
                continue;
 
            
            dist[i] = min(dist[i], graph[i][j] +
                                        dist[j]);
        }
    }
 
    return dist[0];
    }
 
     
     int main()
    {
    
    int graph[N][N] =
      {{INF, 1, 2, 5, INF, INF, INF, INF},
       {INF, INF, INF, INF, 4, 11, INF, INF},
       {INF, INF, INF, INF, 9, 5, 16, INF},
       {INF, INF, INF, INF, INF, INF, 2, INF},
       {INF, INF, INF, INF, INF, INF, INF, 18},
       {INF, INF, INF, INF, INF, INF, INF, 13},
       {INF, INF, INF, INF, INF, INF, INF, 2},
      {INF, INF, INF, INF, INF, INF, INF, INF}};
 
    cout << shortestDist(graph);
    return 0;
    }
    
• COMPLEXITY

     O(n2)
