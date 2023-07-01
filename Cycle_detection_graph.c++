#include <bits/stdc++.h>
using namespace std;
bool dfs(int node,int par,unordered_map<int,list<int>>&adj,
unordered_map<int,bool>&vis)
{
    vis[node]=true;
    for(auto neighbour:adj[node])
    {
        if(!vis[neighbour])
        {
            bool cycle = dfs(neighbour,node,adj,vis);

            if (cycle) {
              return true;
            } 
        }
        else if (par != neighbour)
              return true;
    }
    return false;
}


string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int ,list<int>>adj;
    unordered_map<int,bool>vis;
    if(m==0 || n==0)
    return "No";

    for(int i=0;i<m;i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            bool ans = dfs(i,-1,adj,vis);

            if(ans == 1)
            return "Yes";
        }
    }
    return "No";
}
