#include <bits/stdc++.h> 
using namespace std;
    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };


vector<int> getLeftView(TreeNode<int> *root)
{
    vector<vector<int>>ans;
    vector<int>res;
    if(root == NULL)
    return res;

    queue<TreeNode<int>*>q;
    q.push(root);

    while(!q.empty())
    {
        int size=q.size();
        vector<int>v;
        for(int i=0;i<size;i++)
        {
           TreeNode<int>* temp = q.front();
           v.push_back(temp->data);
           q.pop();

           if(temp->left)
           q.push(temp->left);

           if(temp->right)
           q.push(temp->right);

        }
        ans.push_back(v);
    }
    for(int i=0;i<ans.size();i++)
    {
        res.push_back(ans[i][0]);
    }
    return res;
}