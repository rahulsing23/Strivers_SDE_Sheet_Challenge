#include <bits/stdc++.h> 
using namespace std;
class Queue {
public:
    Queue() {
       vector<int>st;
    }

    /*----------------- Public Functions of Queue -----------------*/

      vector<int>st;
    bool isEmpty() {
        return st.size()==0?true:false;
    }

    void enqueue(int data) {
        st.push_back(data);
    }

    int dequeue() {
        int temp=-1;
        if(st.size()!=0)
        { temp=st[0];
          st.erase(st.begin());}
        return temp;
    }

    int front() {
        return st.size()==0?-1:st[0];
    }
};