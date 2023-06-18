#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long curr=0,maxsum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        curr+=arr[i];

        if (curr >= maxsum) {
          maxsum = curr;
        }
        if (curr <= 0)
          curr = 0;
    }
    if(maxsum<0)
    return 0;
    return maxsum;
}