#include <bits/stdc++.h> 
using namespace std;
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
   vector<pair<pair<int, int>, int>>ans;
   unordered_map<int,list<pair<int,int>>>adj;
   
   for(int i=0;i<g.size();i++)
   {
       int u = g[i].first.first;
       int v = g[i].first.second;
       int w  = g[i].second;

       adj[u].push_back(make_pair(v,w));
       adj[v].push_back(make_pair(u,w));
   }

   vector<int>key(n+1);
   vector<bool>mst(n+1);
   vector<int>parent(n+1);

   for(int i=0;i<=n;i++)
   {
       key[i]=INT_MAX;
       mst[i]=false;
       parent[i]=-1;
    
   }
   key[1]=0;
   parent[1]=-1;
   for(int i=1;i<=n;i++)
   {
       int u;
       int mini = INT_MAX;

       for(int v=1;v<=n;v++)
       {
           if(mst[v] == false && key[v]<mini)
           {
               u = v;
               mini = key[v];
           }
       }
       mst[u]=true;
       for(auto i: adj[u])
       {
           int v = i.first;
           int w = i.second;

           if(mst[v]==false && w<key[v])
           {
               key[v]=w;
               parent[v]=u;
           }
       }
   }
   for(int i=2;i<=n;i++)
   {
       ans.push_back({{parent[i],i},key[i]});
   }
return ans;
}
