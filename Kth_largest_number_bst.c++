#include <bits/stdc++.h> 
using namespace std;
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };



int KthLargestNumber(TreeNode<int>* root, int k) 
{
    if(root==NULL)
    return -1;

    vector<int>res;
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        for(int i=0;i<size;i++)
        {
            TreeNode<int>*temp=q.front();
            q.pop();
            res.push_back(temp->data);
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
    sort(res.begin(),res.end(),greater<int>());
    if(k>res.size())
    return -1;
    return res[k-1];
}
