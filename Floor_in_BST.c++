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



int floorInBST(TreeNode<int> * root, int x)
{
    if(root ==  NULL)
    {
        return 0;
    }
    vector<int>ans;
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            TreeNode<int>* temp =q.front();
            ans.push_back(temp->val);
            q.pop();

            if(temp->left)
            q.push(temp->left);

            if(temp->right)
            q.push(temp->right);
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]==x)
        return ans[i];
        else if(ans[i]>x)
        return ans[i-1];
    }
    return ans[ans.size()-1];
  
}