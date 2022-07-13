class Solution {
public:
  int sumNumbersHelper(TreeNode* root, int sum)
{
	if(!root)
		return 0;

	sum = sum * 10 + root -> val;

	if(!root -> left && !root -> right)
		return sum;

	return sumNumbersHelper(root -> left, sum) + sumNumbersHelper(root -> right, sum);
}

int sumNumbers(TreeNode* root) {
	return sumNumbersHelper(root, 0);
}
};