#include <bits/stdc++.h> 
using namespace std;
class Stack {
    
public:
    vector<int>arr;
    int k;
    Stack(int capacity) {
        vector<int>arr;
         k = capacity;
    }

    void push(int num) {
        
        arr.insert(arr.begin(),num);
    }

    int pop() {
        int temp=-1;
        if(arr.size()!=0)
        {
            temp = arr[0];
            arr.erase(arr.begin());
        }
        return temp;
    }
    
    int top() {
         int temp=-1;
        if(arr.size()!=0)
        {
            temp = arr[0];
    
        }
        return temp;
    }
    
    int isEmpty() {
         
        if(arr.size()==0)
        {
           return 1;
        }
        return 0;
    }
    
    int isFull() {
        if(arr.size()>k)
        return 1;

        return 0;
    }
    
};