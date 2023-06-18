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


bool detectCycle(Node *head)
{
    map<Node*,int>mp;
    Node* p = head;
    while(p!=NULL)
    {
        if(mp.count(p)!=0)
        {
            return 1;
        }
        mp[p]++;
        p=p->next;
    }
    return 0;
}