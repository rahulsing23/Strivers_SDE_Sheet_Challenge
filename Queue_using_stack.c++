#include<bits/stdc++.h>
using namespace std;
class Queue {
    // Define the data members(if any) here.
    
    public:
    Queue() {
       stack<int>st;
       stack<int>s;
    }
     stack<int>st;
       stack<int>s;
    void enQueue(int val) {
    while(!st.empty())
    {
        int temp = st.top();
        s.push(temp);
        st.pop();
    }
    st.push(val);
    while(!s.empty())
    {
        int temp = s.top();
        st.push(temp);
        s.pop();
    }
    }

    int deQueue() {
       int temp = -1;
       if(!st.empty())
       {
           temp = st.top();
           st.pop();
       }
       return temp;
    }

    int peek() {
        int temp = -1;
         if(!st.empty())
       {
           temp = st.top();
        
       }
       return temp;
    }

    bool isEmpty() {
        return st.empty();
    }
};