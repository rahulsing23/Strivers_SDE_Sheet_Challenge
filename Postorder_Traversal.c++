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

void postorder(TreeNode* root, vector<int>&ans)
{
    if(root==NULL)
    return ;
    postorder(root->left,ans);
    postorder(root->right,ans);
    ans.push_back(root->data);
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int>ans;
    if(root==NULL)
    return ans;
    postorder(root,ans);

    return ans;
}