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


bool isPalindrome(LinkedListNode<int> *head) {
    vector<int>s,ss;
    LinkedListNode<int> *p=head;
    while(p!=NULL)
    {
        s.push_back(p->data);
        p=p->next;
    }
    for(int i=0;i<s.size();i++)
    ss.push_back(s[i]);
    reverse(s.begin(),s.end());
    if(ss == s)
    return 1;

    return 0;
    


}