#include <iostream>
#include "vector"
#include "queue"
using namespace std;
 struct TreeNode
 {
	 int val;
	 TreeNode *left;
	 TreeNode *right;
	 TreeNode() : val(0), left(nullptr), right(nullptr) {}
	 TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	 TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 class Solution
 {
	bool leftoright = true;
 public:
	 vector<vector<int>> zigzagLevelOrder(TreeNode *root)
	 {
		vector<vector<int>>result;
		if (!root)
		{
			return result;
		}
		queue<TreeNode*>Q;
		Q.push(root);
		while (!Q.empty())
		{
			vector<int>temp;
			int size=Q.size();
			while (size--)
			{
				TreeNode *curr=Q.front();
				Q.pop();
				temp.push_back(curr->val);
				if (curr->left)
				{
					Q.push(curr->left)
				}
				if (curr->right)
				{
					Q.push(curr->right)
				}	
			}
			if (!leftoright)
			{
				reverse(temp.begin(),temp.end())
			}
			leftoright=!leftoright;
			result.push_back(temp);
		}
		return result;
	 }
 };