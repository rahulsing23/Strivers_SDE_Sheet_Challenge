#include <bits/stdc++.h> 
using namespace std;
void sortStack(stack<int> &stack)
{
	vector<int>ans;
	while(!stack.empty())
	{
		int q = stack.top();
		ans.push_back(q);
		stack.pop();
	}
	sort(ans.begin(),ans.end());
	int i=0;
	while(i<ans.size())
	{
		stack.push(ans[i]);
		i++;
	}
}