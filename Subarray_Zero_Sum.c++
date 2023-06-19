#include <bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {

  unordered_map<int,int>mp;
  int maxlen = 0,curr=0;
  for(int i=0;i<arr.size();i++)
  {
     curr+=arr[i];
     if(curr==0)
     {
       maxlen = max(maxlen,i+1);
     }
     else{
       if (mp.find(curr) != mp.end()) {
         maxlen = max(maxlen, i - mp[curr]);
       }
        else
       mp[curr] = i;
     }
  }
  return maxlen;

}