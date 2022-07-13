/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   bool isValidBST(TreeNode* root) {
    return recursive(root, LONG_MIN, LONG_MAX);
}
    
bool recursive(TreeNode* node, long lower, long upper) {
    if (!node) return true;
        
    if (lower < node->val && node->val < upper) {
        return recursive(node->left, lower, node->val) && recursive(node->right, node->val, upper);
    }
        
    return false;
}
};