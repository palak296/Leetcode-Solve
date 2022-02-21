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
    vector<int> rightSideView(TreeNode* root)
    {
       
   map<int,int>mp;
   queue<pair<TreeNode*,int>>q;
       vector<int>v;
  
   if(root == NULL)
        return v;
   q.push({root,0});
   while(!q.empty())
   {
       auto p=q.front();
       TreeNode* nn=p.first;
       q.pop();
       int x=p.second;
       if(nn->left)
       q.push({nn->left,x+1});
       if(nn->right)
       q.push({nn->right,x+1});
       //if(mp.find(x)==mp.end())
       mp[x]=nn->val;
   }
   
   for(auto it : mp)
   {
       v.push_back(it.second);
   }
   return v;
    }
};