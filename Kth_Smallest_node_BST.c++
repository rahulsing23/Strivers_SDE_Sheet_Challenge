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



int kthSmallest(TreeNode<int> *root, int k)
{
	  vector<int>ans;
    if(root == NULL)
    return 0;
  
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
         for(int i=0;i<size;i++)
         {
             TreeNode<int> *temp=q.front();
             q.pop();
             ans.push_back(temp->data);

             if(temp->left)
             q.push(temp->left);

             if(temp->right)
             q.push(temp->right);
         }
    }
    sort(ans.begin(),ans.end());
    return ans[k-1];
}