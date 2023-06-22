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

int height(TreeNode<int>* root)
{
    if(root == NULL)
    return 0;

    int op1 = height(root->left);
    int op2 = height(root->right);

    int ans = 1+max(op1,op2);
    return ans;

}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	if(root == NULL)
    return 0;
    int leftpart = diameterOfBinaryTree(root->left);
    int rightpart = diameterOfBinaryTree(root->right);
    int op1 = height(root->left);
    int op2 = height(root->right);

    int ans= op1+op2;
    ans = max(ans,max(leftpart,rightpart));

    return ans;
}
