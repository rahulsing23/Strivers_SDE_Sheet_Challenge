#include <bits/stdc++.h> 
using namespace std;
vector<int> nextGreater(vector<int> &arr, int n) {
    stack<int>st;
    vector<int>ans;
    ans.push_back(-1);
    st.push(arr[n-1]);

    for(int i=n-2;i>=0;i--)
    {
        while(!st.empty() && st.top()<=arr[i])
        st.pop();

        if(st.empty())
        ans.push_back(-1);
        else
        ans.push_back(st.top());
        st.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
     return ans;
}