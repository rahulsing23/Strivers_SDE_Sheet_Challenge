#include <bits/stdc++.h> 
using namespace std;

void func(int ind,int sum,vector<int>&num,int n,vector<int>&subset)
{
    if(ind == n)
    {
        subset.push_back(sum);
        return ;
    }
    func(ind+1,sum+num[ind],num,n,subset);
    func(ind+1,sum,num,n,subset);

    
}
vector<int> subsetSum(vector<int> &num){
     
     vector<int>subset;
     
     func(0,0,num,num.size(),subset);

     sort(subset.begin(),subset.end());
     
     return subset;

}