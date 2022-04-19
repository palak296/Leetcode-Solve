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
    int widthOfBinaryTree(TreeNode* root) {
      if(!root) return 0;
        queue<pair<int,TreeNode*>>q;
      if(root) q.push({0,root});
      int mx=0;
      while(!q.empty())
      {
        int s=q.size();
        int mn=q.front().first;
        int f, l;
        for(int i=0;i<s;i++)
        {
          long long curr_id=q.front().first-mn;
          TreeNode* n=q.front().second;
        q.pop();
          if(i==0) f=curr_id;
          if(i==s-1) l=curr_id;
        
          if(n->left) q.push({curr_id*2+1, n->left});
           if(n->right) q.push({curr_id*2+2, n->right});
          
        }
        mx=max(mx,l-f+1);
        
      }
      return mx;
    }
};