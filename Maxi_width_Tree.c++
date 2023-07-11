#include <bits/stdc++.h> 
using namespace std;
    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };


int getMaxWidth(TreeNode<int> *root)
{
   if(root==NULL)
   return 0;

   queue<TreeNode<int>*>q;
   q.push(root);
   int maxi = 0;
   while(!q.empty())
   {
       int size=q.size();
       vector<int>res;
       for(int i=0;i<size;i++)
       {
           TreeNode<int>*temp = q.front();
           q.pop();
           res.push_back(temp->val);
           if(temp->left)
           q.push(temp->left);

           if(temp->right)
           q.push(temp->right);
       }
       int k=res.size();
       maxi = max(maxi, k);
   }
   return maxi;
}