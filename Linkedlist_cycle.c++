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


Node *firstNode(Node *head)
{
    map<Node*,int>mp;
    Node* p = head;

    while(p)
    {
        if(mp.count(p)!=0)
        {
            return p;
        }
        mp[p]++;
        p=p->next;
    }
    return NULL;
}