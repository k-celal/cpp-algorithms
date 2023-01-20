#include <iostream>
#include "vector"

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
	vector<int> v;

public:
	TreeNode *util(int left, int right)
	{
		if(left>right){
			return nullptr;
		}
		int mid=(left+right)/2;
		TreeNode* root = new TreeNode*(v[mid])
		root->left=util(left,mid-1);
		root->right=util(mid+1,right);
		return root;
	}
	TreeNode *sortedArrayToBST(vector<int> &nums)
	{
		v = nums;
		return util(0, nums.size() - 1, )
	}
};