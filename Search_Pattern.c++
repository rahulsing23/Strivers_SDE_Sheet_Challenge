#include <bits/stdc++.h> 
using namespace std;
vector<int> stringMatch(string text, string pattern) {
	
	vector<int> ans;
    for(int i=0;i<text.size();i++)
	{
		if(text[i]==pattern[0])
		{
			int j=0,k=i,f=0;
			while(j<pattern.size())
			{
				if(pattern[j]!=text[k])
				{
					f++;
					break;
				}
				j++;
				k++;
			}
			if(f==0)
			ans.push_back(i+1);
		}
	}
	return ans;
}
