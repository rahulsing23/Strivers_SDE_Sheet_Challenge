#include <bits/stdc++.h> 
using namespace std;
void bfs(unordered_map<int,list<int>>&adj,
unordered_map<int,bool>&visited,int node,vector<int>&ans)
{
    queue<int>q;
    q.push(node);
    visited[node]=1;
    while(!q.empty())
    {
        int frontnode = q.front();
        ans.push_back(frontnode);
        q.pop();
        vector<int>temp;
        for(auto i:adj[frontnode])
        {
            if(!visited[i])
            {
                temp.push_back(i);
                visited[i]=1;
            }
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++)
        q.push(temp[i]);
    }
}
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
   unordered_map<int,list<int>>adj;
   for(int i=0;i<edges.size();i++)
   {
       pair<int,int>p = edges[i];
       int u = p.first;
       int v = p.second;

       adj[u].push_back(v);
       adj[v].push_back(u);
   }   
   unordered_map<int,bool>visited;
   vector<int>ans;
   for(int i=0;i<vertex;i++)
   {
       if(!visited[i])
       bfs(adj,visited,i,ans);
   }
   return ans;
}