#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
		if(mp[arr[i]]>1)
		return arr[i];
	}
	return 0;
}
