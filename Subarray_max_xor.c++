#include <bits/stdc++.h>
using namespace std;
int subarraysXor(vector<int> &arr, int x)
{
    int count=0,cxor=0,n=arr.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cxor = cxor ^ arr[i];
        if(cxor == x)
        count++;

        if(mp.find(x^cxor)!=mp.end())
        count+=mp[x^cxor];

        mp[cxor]++;


    }
    return count;
}