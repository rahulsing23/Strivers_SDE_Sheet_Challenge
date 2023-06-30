#include <bits/stdc++.h> 
using namspace std;
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };


void preorder(TreeNode* root, vector<int>&ans)
{
    if(root==NULL)
    return ;
    ans.push_back(root->data);
    preorder(root->left,ans);
    preorder(root->right,ans);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    if(root == NULL)
    return ans;

    preorder(root, ans);
    return ans;
}