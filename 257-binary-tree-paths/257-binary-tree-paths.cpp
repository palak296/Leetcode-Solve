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
  void func(TreeNode* root, vector<string>& ans, string s)
  {
    if(root->left==NULL and root->right==NULL){
      ans.push_back(s);
      //s="";
      return;
    }
    if(root->left) func( root->left,ans, s + "->" + to_string(root->left->val));
    if(root->right) func(root->right,ans,  s + "->" + to_string(root->right->val));
    
  }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
      string s=to_string(root->val);
      func(root,ans,s);
      return ans;
    }
};