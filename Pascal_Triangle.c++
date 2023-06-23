#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{  vector<vector<long long int>>ans;
   for(int i=0;i<n;i++)
   {
     vector<long long int>res;
     for(int j = 0;j<=i;j++)
     {
       if(j==0 || i==j )
       res.push_back(1);
       else{
         long long int temp = ans[i-1][j-1]+ans[i-1][j];
         res.push_back(temp);
       }
     }
     ans.push_back(res);
   }
   return ans;
}
