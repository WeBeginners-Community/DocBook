// C++ Implementation of Kosaraju's algorithm to print all SCCs
#include <bits/stdc++.h>
using namespace std;

//function to get the topological sorting of the graph
void dfs(int node, vector<vector<int>> &adjList, vector<bool> &vis, stack<int> &st) {

    // mark the node as visited
    vis[node] = true;

    for(auto &neighbour: adjList[node]) {
        if(!vis[neighbour]) {
            dfs(neighbour, adjList, vis, st);
        }
    }

    // push the node in stack
    st.push(node);
}

// function to get all the components
void getComponent(int node, vector<vector<int>> &transpose, vector<bool> &vis, vector<int> &temp) {

    // we mark the node as visited and then push that node in array
    vis[node] = true;
    temp.push_back(node);   

    for(auto &neighbour: transpose[node]) {
        if(!vis[neighbour]) {
            getComponent(neighbour, transpose, vis, temp);
        }
    }
}

// function to print components
void printComponents(vector<vector<int>> &ans) {

    cout << "Following are strongly connected components in given graph" << endl;

    for(int i = 0; i < ans.size(); i++) {
        cout << "Component number: " << i+1 << endl;
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout<<endl;
    }
}

void kosaraju(int v, int e, vector<vector<int>> &graph) {

    //create adjacency list
    vector<vector<int>> adjList(v);
    for(int i = 0; i < e; i++) {
        int node1 = graph[i][0];
        int node2 = graph[i][1];

        adjList[node1].push_back(node2);
    }

    // stack keeps the nodes in the form of topological sort
    stack<int> st;
    vector<bool> vis(v, 0);     // vis array to keep track of visited nodes

    // this loop will help to put all the nodes
    // in stack in topological sort order
    for(int i = 0; i < v; i++) {
        if(!vis[i]) {
            dfs(i, adjList, vis, st);   // calling the dfs function if the node is not visited
        }
    }

    // taking transpose of the original adjlist
    vector<vector<int>> transpose(v);
    for(int i = 0; i < v; i++) {
        vis[i] = false;
        for(auto neighbour: adjList[i]) {
            transpose[neighbour].push_back(i);
        }
    }

    // it will contain all the connected components
    vector<vector<int>> ans;

    // process till stack is not empty
    while(!st.empty()) {
        int node = st.top();
        st.pop();

        if(!vis[node]) {
            vector<int> temp;
            getComponent(node, transpose, vis, temp);   // this function will bring out current component
            ans.push_back(temp);
        }
    }

    // function to print all the components
    printComponents(ans);
}

int main()
{
    int v, e;
    cin >> v >> e;  // taking input of number od vertices and edges
    vector<vector<int>> graph(e);

    // Create a graph
    for(int i = 0; i < e; i++) {
        int node1, node2;
        cin >> node1 >> node2;      // taking input of the connected nodes
        graph[i] = {node1, node2};
    }
 
    // function call
    kosaraju(v, e, graph);
    return 0;
}