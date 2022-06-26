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
    
    int goodNodes(TreeNode* root) {
        int max=INT_MIN;
        int c=0;
        path(root,max,c);
        return c;
    }
    int path(TreeNode* root, int max, int &c)
    {
        if(root->val>=max) {c++; max=root->val;}
        if(root==NULL) return 0;
        if(root->left) path(root->left,max,c);
        if(root->right) path(root->right,max,c);
        return c;
    }
};