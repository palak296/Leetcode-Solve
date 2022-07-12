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
        queue<pair<TreeNode*,pair<int,int>>>q;
        vector<vector<int>>v;
        map<int,map<int,multiset<int>>>mp;
        if(root) q.push({root,{0,0}});
        while(!q.empty())
        {
            TreeNode* node=q.front().first;
            int h=q.front().second.first;
            int w=q.front().second.second;
            q.pop();
            mp[h][w].insert(node->val);
            if(node->left) q.push({node->left,{h-1,w+1}});
            if(node->right) q.push({node->right,{h+1,w+1}});
            
        }
     for(auto i: mp)
                                   {
                                       vector<int>a;
                                       for(auto j: i.second)
                                       {
                                           a.insert(a.end(),j.second.begin(),j.second.end());
                                       }
                                       v.push_back(a);
                                   }
                                   return v;
    }
};