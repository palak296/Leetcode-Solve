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
 int cb(TreeNode* root, int& c)
  {
    if(root==NULL) return 0;
    int lh=cb(root->left, c);
    int rh=cb(root->right,c);
    c=max(lh+rh,c);
    return 1+max(lh,rh);
  }
   int diameterOfBinaryTree(TreeNode* root) {
     int c=0;
    cb(root,c);
          return c;
    }
};