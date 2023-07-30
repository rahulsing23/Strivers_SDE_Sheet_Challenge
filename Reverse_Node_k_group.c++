#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
	    int data;
	    Node *next;
	    Node(int data)
	    {
		    this->data = data;
		    this->next = NULL;
	    }
};

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	 Node* p = head;
       Node *temp = p;
	   int j=0;
       while(p && j<n)
       {
           stack<int>st;
           temp = p;
           for(int i=0;i<b[j] && p!=NULL;i++)
           {
               st.push(p->data);
               p=p->next;
           }
           while(!st.empty())
           {
               int num = st.top();
               st.pop();
               temp->data = num;
               temp = temp->next;
           }
           j++;
       }
       return head;
}