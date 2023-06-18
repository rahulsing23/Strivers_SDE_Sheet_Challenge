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


Node* removeKthNode(Node* head, int k)
{
   Node* p = head;
   Node* q = head;
   Node* prev = q;
   if(head->next == NULL)
   return NULL;
   while(p!=NULL)
   {
       p=p->next;
       if(k<=0)
       { 
           prev = q;
           q=q->next;
       }
       k--;

   }
   if(q == head)
   {
       head=head->next;
   }
   prev->next = q->next;
   q->next = NULL;
   return head;
}
