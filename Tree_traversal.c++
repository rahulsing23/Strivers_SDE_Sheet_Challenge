#include <bits/stdc++.h> 
using namespace std;

 

    class BinaryTreeNode
    {
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


void preorder(BinaryTreeNode<int> *root,vector<int>&pre)
{
    if(root == NULL)
    return;
    pre.push_back(root->data);
    preorder(root->left,pre);
    preorder(root->right,pre);
}
void postorder(BinaryTreeNode<int> *root,vector<int>&pos)
{
    if(root == NULL)
    return;
    
    postorder(root->left,pos);
    postorder(root->right,pos);
    pos.push_back(root->data);
}
void inorder(BinaryTreeNode<int> *root,vector<int>&ord)
{
    if(root == NULL)
    return;
    
    inorder(root->left,ord);
    ord.push_back(root->data);
    inorder(root->right,ord);
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
     vector<vector<int>>ans;
    if(root==NULL)
    return ans;
   
    vector<int>pos,pre,ord;
    preorder(root,pre);
    inorder(root,ord);
    postorder(root,pos);

    ans.push_back(ord);
    ans.push_back(pre);
    ans.push_back(pos);

return ans;
}