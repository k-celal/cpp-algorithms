#include <iostream>
#include "math.h"

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
public:
	int ans = INT_MAX;
	int level;
	void preOrderTraverse(TreeNode *root)
	{
		if (!root)
		{
			return;
		}
		if (!root->left && !root->right)
		{
			ans = min(ans, level);
			return;
		}
		level++;
		preOrderTraverse(root->left);
		preOrderTraverse(root->right);
		level--;
	}
	int minDepth(TreeNode *root)
	{
		level=1;
		if (!root)
		{
			ans=1;
		}
		preOrderTraverse(root);
		return ans;
	}
};
//max_depth
class Solution
{
public:
	int ans = 0;
	int level;
	void preOrderTraverse(TreeNode *root)
	{
		if (!root)
		{
			return;
		}
		if (!root->left && !root->right)
		{
			ans = max(ans, level);
			return;
		}
		level++;
		preOrderTraverse(root->left);
		preOrderTraverse(root->right);
		level--;
	}
	int maxDepth(TreeNode *root)
	{
		level=1;
		if (!root)
		{
			ans=0;
		}
		preOrderTraverse(root);
		return ans;
	}
};