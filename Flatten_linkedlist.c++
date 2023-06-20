#include<bits/stdc++.h>
using namespace std;
 class Node {
   public:
	int data;
 		Node *next;
 		Node *child;
 		Node() : data(0), next(nullptr), child(nullptr){};
 		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 };
 

Node* flattenLinkedList(Node* head) 
{
	Node *p=head,*q=head,*r=head;

	while(r!=NULL)
	{
		r=r->next;
		
		while(q->child!=NULL)
		{
			
			q=q->child;
	
		}
        q->child=r;
		p->next = NULL;
		q=r;
		p=r;

	}
	p=head;
	vector<int>ans;
	while(p)
	{
		ans.push_back(p->data);
		p=p->child;
	}
	
	sort(ans.begin(),ans.end());
	p=head;
	int i=0;
	while(p)
	{
		p->data=ans[i];
		p=p->child;
		i++;
	}

	return head;
}
