class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
       
        queue<TreeNode*> q;
        vector<vector<int>> vc;
         if(root==NULL) return {};
        q.push(root);
        
       
        while(!q.empty())
        {vector<int>v;
            int size=q.size();
            for(int i=0;i<size;i++){
            TreeNode* current=q.front();
            
            if(current->left!=NULL) q.push(current->left);
            if(current->right!=NULL) q.push(current->right);
             v.push_back(current->val); q.pop();}
            vc.push_back(v);
            
            
        }
        
        return vc;
    }
};