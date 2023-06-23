#include <bits/stdc++.h> 
using namespace std;
int uniqueSubstrings(string str)
{
   int res = 0;
   vector<int>ans(256,-1);
   int i=0;
   for(int j=0;j<str.size();j++)
   {
       i = max(i,ans[str[j]]+1);
       res = max(res,j-i+1);
       ans[str[j]]=j;
   }
   return res;
}