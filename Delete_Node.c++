#include <bits/stdc++.h>
using namespace std;

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };


void deleteNode(LinkedListNode<int> * node) {
   LinkedListNode<int>*p = node;
   LinkedListNode<int>* temp=node;;
   while(node->next!=NULL)
   {
       node->data = node->next->data;
       temp= node;
       node=node->next;
   }
   temp->next = NULL;
   
   
}