#include <bits/stdc++.h> 
using namespace std;
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    vector<pair<int,int>>v;
    for(auto i:mp)
    {
        v.push_back({i.second,i.first});
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    vector<int>ans;
    for(auto i:v)
    {
         if(k==0)
        break;
        int y=i.second;
        ans.push_back(y);
        k--;
       
    }
     sort(ans.begin(),ans.end());
    return ans;
    
}