#include <bits/stdc++.h> 
using namespace  std;
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    unordered_map<int,list<pair<int,int>>>adj;
    for(int i=0;i<edges;i++)
    {
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    vector<int>dist(vertices);
    for(int i=0;i<vertices;i++)
    {
        dist[i]=INT_MAX;
    }
    set<pair<int,int>>st;
    st.insert(make_pair(0,source));
    dist[source]=0;

    while(!st.empty())
    {
        auto top = *(st.begin());
        int nodedist = top.first;
        int topnode = top.second;

        st.erase(st.begin());

        for(auto neighbour:adj[topnode])
        {
            if(nodedist + neighbour.second <dist[neighbour.first])
            {
                auto  record = st.find(make_pair(dist[neighbour.first],neighbour.first));
                if(record!=st.end())
                st.erase(record);

                dist[neighbour.first] = nodedist + neighbour.second;

                st.insert(make_pair(dist[neighbour.first],neighbour.first));
            }

        }
    }
    return dist;
}
