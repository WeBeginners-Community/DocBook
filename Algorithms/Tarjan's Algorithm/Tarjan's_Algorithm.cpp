/* C++ program to find strongly connected components in a
given directed graph using Tarjan's algorithm */
#include <bits/stdc++.h>
using namespace std;

// A recursive function that finds and prints strongly connected components using DFS traversal
void findSCC(int node, int &time, vector<vector<int>> &adjList, vector<int> &disc, vector<int> &low, stack<int> &st, vector<bool> &visited)
{
    // Initialize discovery time and low value
    disc[node] = low[node] = ++time;
    st.push(node);
    visited[node] = true;

    // Go through all vertices adjacent to this
    for (auto neighbour : adjList[node])
    {
        // If neighbour is not visited yet, then recur for it
        if (disc[neighbour] == -1)
        {
            findSCC(neighbour, time, adjList, disc, low, st, visited);

            // Check if the subtree rooted with 'neighbour' has a connection
            // to one of the ancestors of 'node'
            // Case 1:
            low[node] = min(low[node], low[neighbour]);
        }
        // Update low value of 'node' only of 'neighbour' is still in stack.
        // Case 2:
        else if (visited[neighbour] == true)
        {
            low[node] = min(low[node], disc[neighbour]);
        }
    }

    // head node found, pop the stack and print an SCC
    if (low[node] == disc[node])
    {
        while (st.top() != node)
        {
            int u = st.top();
            cout << u << " ";
            visited[u] = false;
            st.pop();
        }
        int u = st.top();
        cout << u << endl;
        visited[u] = false;
        st.pop();
    }
}

// The function to do DFS traversal. It uses findSCC().
void dfs(int v, int e, vector<vector<int>> &graph)
{   
    // creating adjacency list from the graph
    vector<vector<int>> adjList(v);

    for (int i = 0; i < e; i++)
    {
        int u = graph[i][0];
        int v = graph[i][1];

        adjList[u].push_back(v);
    }

    // initializing disc and low array with -1
    vector<int> disc(v, -1), low(v, -1);

    // initializing visited array with 0
    vector<bool> visited(v, 0);
    stack<int> st;

    // varibale to store current time
    int time = 0;

    // Call the recursive helper function to find strongly
    // connected components in DFS tree with vertex 'i'
    for (int i = 0; i < v; i++)
    {
        if (disc[i] == -1)
        {
            findSCC(i, time, adjList, disc, low, st, visited);
        }
    }
}

int main()
{   
    // taking input of number of vertices and edges
    int v, e;
    cin >> v >> e;
    vector<vector<int>> graph(e);

    // taking input of the graph
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[i] = {u, v};
    }

    // function call
    cout << "SCCs in the graph: " << endl;
    dfs(v, e, graph);

    return 0;
}