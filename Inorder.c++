#include <bits/stdc++.h> 
using namespace std;

    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

void inorder(TreeNode *root,vector<int> &ans)
{
    if(root == NULL)
    return ;
    
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int>ans;
    if(root == NULL)
    return ans;

    inorder(root, ans);

    return ans;
}