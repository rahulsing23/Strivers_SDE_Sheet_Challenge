#include <bits/stdc++.h> 
using namespace std;

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
      vector<int>ans;
    if(root == NULL)
    return ans;
  
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
         for(int i=0;i<size;i++)
         {
             BinaryTreeNode<int> *temp=q.front();
             q.pop();
             ans.push_back(temp->val);

             if(temp->left)
             q.push(temp->left);

             if(temp->right)
             q.push(temp->right);
         }
    }
    return ans;
}