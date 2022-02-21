
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return 0;
      return check(root->left,root->right);
    }
  bool check(TreeNode* ln, TreeNode* rn)
  {
    if(ln==NULL and rn==NULL) return true;
    if(ln==NULL or rn==NULL) return false;
    if(ln->val==rn->val)
    return check(ln->left,rn->right) and check(ln->right, rn->left);
    return false;
  }
};
