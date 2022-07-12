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
        vector<vector<int>>v;
        queue<TreeNode*>q;
        int c=0;
        if(root) q.push(root);
        while(!q.empty())
        {c++;
            int n=q.size();
            vector<int>a;
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                a.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                
            }
            if(c%2==0) reverse(a.begin(),a.end());
            v.push_back(a);
        }
        return v;
    }
};