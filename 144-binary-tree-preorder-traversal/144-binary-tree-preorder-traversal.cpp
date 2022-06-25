class Solution {
public:
    void in(TreeNode* root, vector<int> &v){
        if(root==NULL){
            return;
        }
        else{
             v.push_back(root->val);
            in(root->left,v);
           
            in(root->right,v);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        in(root,v);
        return v;
    }
};