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
    int diameterOfBinaryTree(TreeNode* root) {
        int c=0;
      dm(root,c);
      return c;
    }
  int dm(TreeNode* root,int& c)
  {
    if(root==NULL)
    {
      return 0;
    }
    int lh=dm(root->left,c);
      int rh=dm(root->right,c);
    c=max(c,lh+rh);
    return 1+max(lh,rh);
  }
};