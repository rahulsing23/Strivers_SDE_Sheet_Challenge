#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    int i=0;
    int arr[]={1000,500,100,50,20,10,5,2,1};
    int n=9,ans=0;
    for(int i=0;i<n;i++)
    {
        ans +=amount/arr[i];
        amount = amount%arr[i];
    }
    return ans;
}
