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
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        int ans=0;
     c(root,ans);
        return ans;
    }
    int c(TreeNode* root, int &ans)
    {
        if(root==NULL) return 0;
        int l=c(root->left,ans);
        int r=c(root->right,ans);
        ans=max(ans,l+r);
        return max(l,r)+1;
    }
};