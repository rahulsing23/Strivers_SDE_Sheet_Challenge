#include <bits/stdc++.h> 
using namespace std;   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~TreeNode()
		{
			if (left != NULL)
			{
		  		delete left;
			}
			if (right != NULL)
			{
			 	delete right;
			}
		}
	};

bool func(TreeNode<int> *root, int x,vector<int>&ans)
{
	if(root == NULL)
	return false;

	ans.push_back(root->data);

   if(root->data == x)
   return true;
	bool op1 = func(root->left,x,ans);
	bool op2 = func(root->right,x,ans);

	if(op1 || op2)
	{
		return true;	
	}

	ans.pop_back();
	return false;
}

vector<int> pathInATree(TreeNode<int> *root, int x)
{
	vector<int>ans;
    if(root == NULL)
	return ans;

	func(root,x,ans);
	
	return ans;
}
