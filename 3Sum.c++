#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {

	set<vector<int>>v;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++)
	{
		int l=i+1,r = n-1;
		while(l<r)
		{
			if(arr[i]+arr[l]+arr[r]==K)
			{
				v.insert({arr[i],arr[l],arr[r]});
				l++;
				r--;
				continue;
			}
			else if(arr[i]+arr[l]+arr[r]<K)
			{ 
				l++;
			    continue;
			}
			else
			{
				r--;
				continue;
			}
			
		}
		
	}
		vector<vector<int>>ans(v.begin(),v.end());
		return ans;
}