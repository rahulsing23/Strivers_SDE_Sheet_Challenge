#include <bits/stdc++.h> 
using namespace std;
int kthLargest(vector<int>& arr, int size, int k)
{
	sort(arr.begin(),arr.end(),greater<int>());
 
	return arr[k-1];
}