#include <bits/stdc++.h> 
using namespace std;
void subsets(vector<int>&arr,vector<vector<int>>&res,vector<int>&subset,int index)
{
    res.push_back(subset);

    for(int i=index;i<arr.size();i++)
    {
        subset.push_back(arr[i]);

        subsets(arr,res,subset,i+1);
        subset.pop_back();
    }
    return ;
}
vector<vector<int>> pwset(vector<int>v)
{
   vector<vector<int>>res;
   vector<int>subset;
   subsets(v,res,subset,0);
   return res;
}