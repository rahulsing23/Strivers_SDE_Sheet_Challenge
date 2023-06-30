#include <bits/stdc++.h>
using namespace std;


    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };


LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    LinkedListNode<int> *p=head,*r=NULL,*head2=NULL;
    unordered_map<LinkedListNode<int> *,LinkedListNode<int> *>mp;
    while(p!=NULL)
    {
        LinkedListNode<int> *q = new LinkedListNode<int>(p->data);
        if(r==NULL)
        {
            head2=q;
            q->random = NULL;
            q->next = r;
            r=q;
        }
        else
        {
            r->next = q;
            q->random = NULL;
            q->next=NULL;
            r=q;
        }
        mp[p]=q;
        p=p->next;
    }
    LinkedListNode<int> *t = head2;
    p=head;
    while(p!=NULL)
    {
        t->random = mp[p->random];
        t=t->next;
        p=p->next;
    }


    return head2;
}
