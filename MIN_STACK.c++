#include <bits/stdc++.h> 
using namespace std;
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		stack<pair<int,int>>st;
		int mini;
		// Constructor
		minStack() 
		{ 
			stack<pair<int,int>>st;
			mini = INT_MAX;
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{  
			// if(st.empty())
			// mini = num;

			st.push({num,mini});
			if(mini>num)
		    {
			   mini = num;
		    }
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			int temp = -1;
			if(st.size()!=0)
			{
				auto i = st.top();
				if(mini == i.first)
				{
					mini = i.second;
				}
				temp = i.first;
			    st.pop();
			}

			return temp;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			
			int temp = -1;
			if(st.size()!=0)
			{
				temp = st.top().first;
			}
			return temp;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(mini == INT_MAX)
			return -1;
		
			return mini;
		}
};