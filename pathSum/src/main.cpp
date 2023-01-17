#include <iostream>
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
	bool result = false;
	int targetSum;
public:
	void DFS(TreeNode *root,int curSum){
		if (!root || result)
		{
			return;
		}
		curSum += root->val;
		if (!root->left && !root->right)
		{
			if (curSum==targetSum)
			{
				result =true;
				return;
			}
			
		}
		DFS(root->left,curSum);
		DFS(root->right,curSum);
		
	}
	bool hasPathSum(TreeNode *root, int targetSum)
	{
		this->targetSum=targetSum;
		DFS(root,0);
		return result;
	}
};