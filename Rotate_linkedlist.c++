#include <bits/stdc++.h> 
using namespace std;
 class Node {
 public:
      int data;
      Node *next;
      Node() : data(0), next(nullptr) {}
      Node(int x) : data(x), next(nullptr) {}
      Node(int x, Node *next) : data(x), next(next) {}
  };


Node *rotate(Node *head, int k) {
    Node*p = head,*q=head,*r=head;
   
    while(p->next!=NULL)
    {
     
         p=p->next;
    }
    
    int cnt=0;
    while(r!=NULL)
    {
         cnt++;
          r=r->next;
    }
    int t=cnt-k%(cnt);
    for(int i=1;i<t;i++)
    {
         q=q->next;
    }
    p->next =head;
    head=q->next;
    q->next =NULL;
    return head;

}