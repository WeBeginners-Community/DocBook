//topological sort dfs

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

const int n=1e3+!0;
vector<int>adj[n];
vector<int>visited(n,0);

vector<int> topological(int i,stack<int> &s)
{
    visited[i]=1;
    for(int child:adj[i])
    {
        if(!visited[child])
        topological(child,s);
    }
    s.push(i);
}


int main()
{
    int n,m;
    cin>>n>>m;
    stack<int>s;
    vector<int>a;
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        adj[v1].push_back(v2);
    }
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            a=topological(i,s);
        }
    }
    while(!s.empty())
    {
        a.push_back(s.top());
        s.pop();
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<"   ";
    }
}