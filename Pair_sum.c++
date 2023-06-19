#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
  sort(arr.begin(),arr.end());
  int n = arr.size();
  vector<vector<int>>ans;
  map<int,int>mp;
  int count=0;
  for(int i=0;i<n;i++)
  {
     if(mp.find(s-arr[i])!=mp.end())
     {
        count = mp[s-arr[i]];
        while(count-->0)
        ans.push_back({s-arr[i],arr[i]});
     }
     mp[arr[i]]++;
  }
  sort(ans.begin(),ans.end());
  return ans;
}