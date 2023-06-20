#include <bits/stdc++.h> 
using namespace std;
void dfs(int** arr,int i,int j,int n,int m)
{
   if(i>=n ||i<0  ||j<0|| j>=m || arr[i][j]!=1)
   return;

   arr[i][j]=2;
   dfs(arr,i-1,j,n,m);
   dfs(arr,i,j-1,n,m);
   dfs(arr,i+1,j,n,m);
   dfs(arr,i,j+1,n,m);
   dfs(arr,i-1,j-1,n,m);
   dfs(arr,i-1,j+1,n,m);
   dfs(arr,i+1,j-1,n,m);
   dfs(arr,i+1,j+1,n,m);
}
int getTotalIslands(int** arr, int n, int m)
{
   int no_of_island=0;
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      {
         if(arr[i][j]==1)
        { dfs(arr,i,j,n,m);
         no_of_island++;}
      }
   }
   return no_of_island;
}
