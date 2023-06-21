#include <bits/stdc++.h> 
using namespace std;
bool isValidParenthesis(string s)
{
    stack<int>st;
    st.push(-1);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='{' ||s[i]=='(' ||s[i]=='[')
        {
            st.push(s[i]);
        } 
        else {
          if (s[i] == '}' && st.top()=='{')
          st.pop();
          else if (s[i] == ')' && st.top()=='(')
          st.pop();
          else if (s[i] == ']' && st.top()=='[')
          st.pop();

          else
          st.push(s[i]);
        }
    }
    if(st.size()==1)
    return 1;

    return 0;
}