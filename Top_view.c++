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


vector<int> getTopView(TreeNode<int> *root) {
     vector<int>ans;
     if(root == NULL)
     return ans;

     map<int,map<int,vector<int>>> mp;
     queue<pair<TreeNode<int>*,pair<int,int>>>q;
     q.push(make_pair(root,make_pair(0,0)));

     while(!q.empty())
     {
         pair<TreeNode<int>*,pair<int,int>> temp = q.front();
         TreeNode<int> * frontnode = temp.first;
         int hd = temp.second.first;
         int lvl = temp.second.second;
         q.pop();
         mp[hd][lvl].push_back(frontnode->val);
         if(frontnode->left)
         q.push(make_pair(frontnode->left,make_pair(hd-1,lvl+1)));

         if(frontnode->right)
         {
            q.push(make_pair(frontnode->right,make_pair(hd+1,lvl+1)));

         }

     }
     for(auto i:mp)
     {
         for(auto j:i.second)
         {
             
                 ans.push_back(j.second[0]);
                 break;
             
         }
     }
     return ans;
}