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
        queue<TreeNode*> q;
      vector<vector<int>>bfs;
      if(root==NULL) return bfs;
      q.push(root);
      int c=0;
      while(!q.empty()){
        c++;
        int s=q.size();
        vector<int>v;
        for(int i=0;i<s;i++)
        {
          TreeNode* nn=q.front();
          q.pop();
          if( nn->left) q.push(nn->left);
           if( nn->right) q.push(nn->right);
          v.push_back(nn->val);
        }
        if(c%2==0)
        reverse(v.begin(),v.end());
        bfs.push_back(v);
      }
      return bfs;
    }
};