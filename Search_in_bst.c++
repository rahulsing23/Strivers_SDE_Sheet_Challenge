#include <bits/stdc++.h> 
using namespace std;
template <typename T>
    class BinaryTreeNode {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


bool searchInBST(BinaryTreeNode<int> *root, int x) {
    if(root == NULL)
    return 0;
    vector<int>ans;
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
         for(int i=0;i<size;i++)
         {
             BinaryTreeNode<int> *temp=q.front();
             q.pop();
             ans.push_back(temp->data);

             if(temp->left)
             q.push(temp->left);

             if(temp->right)
             q.push(temp->right);
         }
    }
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]==x)
        return 1;
    }
    return 0;
}