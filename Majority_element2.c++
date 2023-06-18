#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    int major_element = floor(arr.size()/3);
    map<int,int>mp;
    vector<int>ans;
    for(int i=0;i<arr.size();i++)
    {
        mp[arr[i]]++;
    }
    for(auto i:mp)
    {
        if(i.second>major_element)
        ans.push_back(i.first);
    }
      return ans;
}