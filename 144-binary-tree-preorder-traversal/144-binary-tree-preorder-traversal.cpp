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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
      vector<int>v;
      TreeNode* node=root;
      while(true)
      {
        if(node!=NULL)
        {
          st.push(node);
          v.push_back(node->val);
          node=node->left;
        }
        else
        {
          if(st.empty()==true)
          {
            break;
          }
          node=st.top();
          st.pop();
          //st.push(node);
          node=node->right;
        }
      }
      return v;
    }
};