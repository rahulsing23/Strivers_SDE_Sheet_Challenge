#include<bits/stdc++.h>
using namespace std;
bool dfs(unordered_map<int,list<int>>&adj,unordered_map<int,bool>&vis,int node,unordered_map<int,bool>&dfsvis)
{
  vis[node] = true;
  dfsvis[node]=true;
  for(auto i:adj[node])
  {
    if(!vis[i])
    {
      bool cycle = dfs(adj,vis,i,dfsvis);
      if(cycle)
      {
        return true;
      }
    }
    else if(dfsvis[i])
    {
      return true;
    }
  }
  dfsvis[node]=false;
  return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
   unordered_map<int,list<int>>adj;
   unordered_map<int,bool>vis;
   unordered_map<int,bool>dfsvis;
   for(int i=0;i<edges.size();i++)
   {
     int u = edges[i].first;
     int v = edges[i].second;

     adj[u].push_back(v);
   }

   for(int i=1;i<=n;i++)
   {
     if(!vis[i])
     {
       bool cycle=dfs(adj,vis, i,dfsvis);

       if(cycle)
       return true;
     }
     
   }
   return false;
}