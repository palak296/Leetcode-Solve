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
    TreeNode* insertIntoBST(TreeNode *node, int val) {
		if (!node) {
			TreeNode *newNode = new TreeNode(val);
			return newNode;
		}
      auto cur=node;
		while(true)
    {
      if(val>node->val)
      {
        if(node->right!=NULL) node=node->right;
        else {node->right=new TreeNode(val); break;}
      }
      else {if(node->left!=NULL) node=node->left;
        else {node->left=new TreeNode(val); break;}}
        
    }
      return cur;
	}
};