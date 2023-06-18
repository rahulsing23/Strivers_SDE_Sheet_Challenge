#include <bits/stdc++.h>
using namespace std;
string fourSum(vector<int> arr, int target, int n) {
    unordered_map<int,pair<int,int>>mp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            mp[arr[i]+arr[j]]={i,j};
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           int  val = target- (arr[i]+arr[j]);
           if(mp.find(val)!=mp.end())
           {
                   pair<int,int>p = mp[val];
                   int x = p.first;
                   int y = p.second;

                   if(x!=i && x!=j && y!=i && y!=j)
                   return "Yes";
               
           }
        }
    }
    return "No";
}
