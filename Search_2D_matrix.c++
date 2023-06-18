#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int top=0,down=mat.size()-1,right=mat[0].size()-1,temp=0,low=0,end=right;
    while(top<=down) 
    {
        if(mat[top][0]==target || mat[top][right]==target)
        return 1;
        if(mat[top][0]>=target && mat[top][right]<=target)
        {
            temp = top;
            break;
        }
        top++;
    }
    int mid =0;
    while(low<=end)
    {
        mid = low+(end-low)/2;
        if(mat[temp][mid]==target)
        return 1;
        else if(mat[temp][mid]<target)
        low=mid+1;
        else 
        end =mid-1;
    }
    return 0;
}