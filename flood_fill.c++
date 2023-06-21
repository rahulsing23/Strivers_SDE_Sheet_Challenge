#include <bits/stdc++.h> 
using namespace std;
void dfs(vector<vector<int>> &image,int i,int j,int color,int newColor)
{
    int n= image.size();
    int m=image[0].size();
    if(i<0 || i>=n || j<0 || j>=m || image[i][j]!=color)
    return ;
    image[i][j]=newColor;
    dfs(image,i-1,j,color,newColor);
    dfs(image,i+1,j,color,newColor);
    dfs(image,i,j-1,color,newColor);
    dfs(image,i,j+1,color,newColor);
    
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    int color = image[x][y];

    if(color!=newColor)
    {
        dfs(image,x,y,color,newColor);
    }
    return image;
}