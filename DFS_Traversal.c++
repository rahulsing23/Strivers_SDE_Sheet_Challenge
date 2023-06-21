#include <bits/stdc++.h> 
using namespace std;
void dfs(unordered_map<int,list<int>>&adj,int node,unordered_map<int,bool>&visited,vector<int>&component)
{
    visited[node]=1;
    component.push_back(node);
    for(int i:adj[node])
    {
        if(!visited[i])
        dfs(adj,i,visited,component);
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int,list<int>>adj;
    for(int i=0;i<edges.size();i++)
    {
        int x = edges[i][0];
        int y = edges[i][1];

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    unordered_map<int,bool>visited;
    vector<vector<int>>ans;
    vector<int>component;
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            component.clear();
            dfs(adj,i,visited,component);
            ans.push_back(component);
        }
    }
    return ans;
}