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
    bool isSymmetric(TreeNode* root) {
    return c(root->left,root->right);
    
    }
    bool c(TreeNode* l, TreeNode* r)
    {
        if(l==NULL or r==NULL) return l==r;
        return l->val==r->val and c(l->left,r->right) and c(l->right, r->left);
    }
};