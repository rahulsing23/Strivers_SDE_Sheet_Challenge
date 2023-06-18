#include <bits/stdc++.h>
using namespace std;
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	long long sum1 = n*(n+1)/2,sum2=0,repele=0;
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		sum2+=arr[i];
		mp[arr[i]]++;
		if(mp[arr[i]]>1)
		{
			sum2-=arr[i];
            repele = arr[i];
		}
	}
	return {sum1-sum2,repele};
	
	
}
