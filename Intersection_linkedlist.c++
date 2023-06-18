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



Node* findIntersection(Node *firstHead, Node *secondHead)
{
    int cnt1=0,cnt2=0;
    Node* p = firstHead;
    Node* q = secondHead;
    while(p!=NULL)
    {
        cnt1++;
        p=p->next;
    }
    while(q!=NULL)
    {
        cnt2++;
        q = q->next;

    }
    int diff = abs(cnt1-cnt2);
    p=firstHead;
    q = secondHead;
    if(cnt1>cnt2)
    {
        while(diff-->0)
        {
            p=p->next;
        }
    }
    else{
        while(diff-->0)
        {
            q = q->next;
        }
    }
    while(p!=NULL && q!=NULL)
    {
        if(p == q)
        {
            return q;
        }
        p=p->next;
        q=q->next;
    }
    return NULL;
}






