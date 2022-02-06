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
    vector<int> postorderTraversal(TreeNode* root) {
        
        stack<TreeNode*> s;
        vector<int>v;
        if(root) s.push(root);
        while(!s.empty())
        {
            TreeNode* p=s.top();
            if(p->left)
            {
                
                TreeNode* j=p->left;
                s.push(j);
                p->left=NULL;
            }
            else if(p->right)
            {
                TreeNode* m=p->right;
                s.push(p->right);
                p->right=NULL;
            }
           else{s.pop(); 
            v.push_back(p->val);}
            
        }
        return v;
    }
};