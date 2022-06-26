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
    bool c(TreeNode* p, TreeNode* q)
    {
        if(p==NULL or q==NULL) return p==q;
        return p->val==q->val and c(p->left,q->left) and c(p->right,q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        int n=subRoot->val;
       queue<TreeNode*>q;
        if(root) q.push(root);
        TreeNode* node;
            while(!q.empty())
            {
               
                 node=q.front();
                q.pop();
                if(node->val==n and c(node,subRoot)){return true;}
                
                   
                        if(node->left) q.push(node->left);
                        if(node->right) q.push(node->right);
                    
                
            }
       return c(node,subRoot);
    }
};
