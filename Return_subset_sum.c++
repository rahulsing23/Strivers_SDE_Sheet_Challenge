#include <bits/stdc++.h> 
using namespace std;
void func(vector<int> arr, int ind,int n, int k,vector<vector<int>>&ans,vector<int>subset)
{
    if(n==0)
   { 
    if(k==0)
    {
        ans.push_back(subset);
    }
    return;
    }
    

    func(arr,ind+1,n-1,k,ans,subset);
    subset.push_back(arr[ind]);

    func(arr,ind+1,n-1,k-arr[ind],ans,subset);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>>ans;
    vector<int>subset;
    func(arr,0,n,k,ans,subset);

    return ans;
}