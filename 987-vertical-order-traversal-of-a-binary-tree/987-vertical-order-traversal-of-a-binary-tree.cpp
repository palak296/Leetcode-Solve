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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> nodes;
      queue<pair<TreeNode*, pair<int,int>>> todo;
      todo.push({root,{0,0}});
      while(!todo.empty())
      {
        auto p=todo.front();
        TreeNode* nn=p.first;
        todo.pop();
        int x=p.second.first, y=p.second.second;
        nodes[x][y].insert(nn->val);
        if(nn->left)
          todo.push({nn->left,{x-1,y+1}});
        if(nn->right)
          todo.push({nn->right,{x+1,y+1}});
      }
      vector<vector<int>>v;
      for(auto it: nodes)
      {
        vector<int>col;
        for(auto p: it.second)
        {
          col.insert(col.end(),p.second.begin(),p.second.end());
          
        }
        v.push_back(col);
      }      
      return v;
    }
};