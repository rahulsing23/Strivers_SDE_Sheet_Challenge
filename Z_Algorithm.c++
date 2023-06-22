#include <bits/stdc++.h> 
using namespace std;
//method 1:
int zAlgorithm(string s, string p, int n, int m)
{
	int cnt =0;
	for(int i=0;i<n-m+1;i++)
	{
		if(p == s.substr(i,m))
		{
			cnt++;
		}
	}

	
	return cnt;
}
//method-2:
int zAlgorithm(string s, string p, int n, int m)
{
	vector<int>z;
	string new_string = p+'#'+s;
	int size = new_string.size();
	for(int i=0;i<size;i++)
	{
		if(i<=m)
		{
			z.push_back(0);
		}
		else {
			int left = 0, right = 0;
			if(new_string[left]==new_string[i])
			{
				right=i;
				while(new_string[left]==new_string[right] && right<size)
				{
					left++;
					right++;
				}
			
			}
			z.push_back(left);
		}
	}
	int cnt=0;
	for(int i=0;i<z.size();i++)
	{
		if(m==z[i])
		cnt++;
	}
	
	return cnt;
}