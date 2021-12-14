class Solution {
public:
    int dfs(TreeNode* node, int sum, int low, int high){
        if (node == nullptr) return sum;
        else if(node->val >= low && node->val <= high){
            sum += node->val;        
            sum = dfs(node->left, sum, low, high);
            sum = dfs(node->right, sum, low, high);}
        else if(node->val < low) sum = dfs(node->right, sum, low, high);
        else if(node->val > high) sum = dfs(node->left, sum, low, high);
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        sum = dfs(root, sum, low, high);
        return sum;
    }
};