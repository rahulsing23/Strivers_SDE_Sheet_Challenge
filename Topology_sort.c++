#include <bits/stdc++.h> 
using namespace std;
void topsort(unordered_map<int,list<int>>&adj,vector<bool>&visited,int node,stack<int>&st)
{
    visited[node]=true;

    for(auto i: adj[node])
    {
        if(!visited[i])
        {
             topsort(adj,visited,i,st);
        }
    }
    st.push(node);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
   unordered_map<int,list<int>>adj;
   vector<bool>visited(v);
   vector<int>ans;
   stack<int>st;

   for(int i=0;i<e;i++)
   {
       int u = edges[i][0];
       int v = edges[i][1];

       adj[u].push_back(v);
   }

   for(int i=0;i<v;i++)
   {
       if(!visited[i])
       {
           topsort(adj,visited,i,st);
       }
   }

   while(!st.empty())
   {
       ans.push_back(st.top());
       st.pop();
   }
   return ans;
}