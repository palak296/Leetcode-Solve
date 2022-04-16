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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
      if(root!=NULL) q.push(root);
      vector<vector<int>>ans;
      int c=0;
      while(!q.empty())
      {
        int s=q.size();
        c++;
       
        vector<int>v;
        for(int i=0;i<s;i++)
        {
          
          TreeNode* node=q.front();
          q.pop();
          if(node->left) q.push(node->left);
          if(node->right) q.push(node->right);
          v.push_back(node->val);
          
        }
         if(c%2==0) reverse(v.begin(),v.end());
        ans.push_back(v);
      }
      return ans;
    }
};