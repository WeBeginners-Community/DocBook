#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(int i,vector<int> &ans,vector<int>&vis,vector<vector<int>>adj){
    vis[i]=1;// Mark the current node as visited and push it
    queue<int>q;
    q.push(i);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);//To store the traveral ans vector is used
        //Start traversing all the adjacent vertices using adjacency list
        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of vertices:"<<endl;
    cin>>n;//Number of Vertices
    vector<vector<int>>adj(n+1);
    int e;//Number of edges
    cout<<"Enter the number of edges:"<<endl;
    cin>>e;
    int u,v;
    //Formation of Adjacency List
    for(int i=0;i<e;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //Visited array to store if the vertices are visited earlier or not
    vector<int>vis(n+1,0);
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(vis[i]==0){
            bfs(i,ans,vis,adj);
        }
    }
    cout<<"BFS Traversal of Graph:"<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
   return 0;
}