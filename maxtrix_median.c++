#include <bits/stdc++.h>
using namespace std;
int getMedian(vector<vector<int>> &matrix)
{
    vector<int>ans;
    int n=matrix.size();
    int m = matrix[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ans.push_back(matrix[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    int mid = n*m/2;
   
    return ans[mid];
}