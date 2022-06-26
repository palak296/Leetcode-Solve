int func(TreeNode *root,int &diameter)
{
if(root==NULL)
return 0;
int lh=func(root->left,diameter);
int rh=func(root->right,diameter);
diameter=max(lh+rh,diameter);
return 1+max(lh,rh);
}
int diameterOfBinaryTree(TreeNode* root)
{
int diameter=0;
func(root,diameter);
return diameter;
}