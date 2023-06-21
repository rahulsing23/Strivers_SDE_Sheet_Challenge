#include <bits/stdc++.h>
using namespace std;

    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL  && second == NULL)
    return NULL;

    if(first == NULL)
    return second;

    if(second == NULL)
    return first;
    Node<int> *p=first;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next = second;
    p=first;
    vector<int>ans;
    while(p!=NULL)
    {
        ans.push_back(p->data);
        p=p->next;
    }
    sort(ans.begin(),ans.end());
    int i=0;
    p=first;
    while(i<ans.size())
    {
        p->data = ans[i];
        i++;
        p=p->next;
    }
    return first;

}
