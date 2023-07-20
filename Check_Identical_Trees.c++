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


bool func(BinaryTreeNode<int>* root1,BinaryTreeNode<int>* root2)
{
    if(root1==NULL && root2==NULL)
    return true;

    
   if(root1 && root2)
    return(func(root1->left,root2->left) && func(root1->right,root2->right)
     && root1->data == root2->data);


    return false;

}
bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
  
    bool ans=func(root1,root2); 
    if(ans)
    return 1;

    return 0;
}