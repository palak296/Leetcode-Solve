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
    vector<int> rightSideView(TreeNode* root) {
        
    vector<int>v;
   map<int,int>mp;
   queue<pair<int,TreeNode*>>q;
   if(root)
   q.push({0,root});
   while(!q.empty())
   {
       auto p=q.front();
       int y=p.first;
       TreeNode* node=p.second;
       q.pop();
        mp[y]=node->val;
       if(node->left) q.push({y+1,node->left});
       if(node->right) q.push({y+1,node->right});
       
   }
   for(auto it: mp)
   {
       v.push_back(it.second);
   }
   return v;
}

};


   