#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node *findMiddle(Node *head) {
    int cnt=0;
    Node *curr=head;
    while(curr)
    {
        cnt++;
        curr=curr->next;
    }
    int mid = cnt/2;

    curr = head;
    

    while(mid-->0)
      {
          curr=curr->next;
      }
      return curr;
}

