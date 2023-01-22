#include<iostream>
#include<vector>
#include<queue>
using namespace std;
//structure to represent a weighted edge in graph(source,destination,weight)
struct node{
    int u;
    int v;
    int wt;
    node(int first,int second,int weight)
    {
        u = first;//source
        v = second;//destination
        wt = weight;//weight
    }
};
int main()
{
    cout<<"Enter the number of vertices and edges:"<<endl;
    int n,m;//n->number of vertices and m->number of edges
    cin>>n>>m;
    //Graph is represented as an array of edges
    vector<node>adj;
    // Step 1: Initialize distances from src to all other
    // vertices as INFINITE
    vector<int>dist(n,1e9);
    cout<<"Enter the source,destination and weight for edge formation:"<<endl;
    for(int i = 0;i<m;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;//
        adj.push_back(node(u,v,wt));//Using structure to store the weighted edge
    }
    cout<<"Enter the source:"<<endl;
    int src;//Source from where all the shortest paths are to be calculated to reach each of the node
    cin>>src;
    dist[src] = 0;
    for(int i = 1;i<=n-1;i++)
    {
        for(auto it : adj)
        {
            // Step 2: Relax all edges |V| - 1 times. A simple
            // shortest path from src to any other vertex can have
            // at-most |V| - 1 edges
            if(dist[it.u]+it.wt < dist[it.v])
                dist[it.v] = dist[it.u]+it.wt;
        }
    }
    //Detection of cycle
    int fl = 0;
    for(auto it : adj)
    {
        //If distance still keeps on reducing it confirms the presence of negative weight cycle in a graph
        if(dist[it.u]+it.wt < dist[it.v])
        {
            cout<<"The negative cycle exist";
            fl = 1;
            break;
        }
    }
    //If Negative Cycle doesnt exists,the shortest path of each vertex from source node is printed
    if(fl == 0)
    {
        for(int i = 0;i<n;i++)
        {
            cout<<"the distance of "<<i<<" is "<<dist[i]<<endl;
        }
    }
    return 0;
}