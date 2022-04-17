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
   
    vector<string> binaryTreePaths(TreeNode* root) {
      vector<string>v;
       string s=to_string(root->val);
      func(root,s,v);
      return v;
    }
  void func(TreeNode* root, string s,vector<string>&v)
  {
     if(root->left==NULL and root->right==NULL) {v.push_back(s); return;}
   
    
    if(root->left) func(root->left,s+"->"+to_string(root->left->val), v);
     
    if(root->right) func(root->right,s+"->"+to_string(root->right->val),v);
      
    
  }
};