/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param root: a TreeNode, the root of the binary tree
     * @return: nothing
     */
    void invertBinaryTree(TreeNode *root) 
    {
        // write your code here
        dfs (root);
    }
        private:
        void dfs (TreeNode *node)
        {
            TreeNode *left=node->left,*right=node->right;
            node->left=right;
            node->right=left;
            if (left!=NULL)
            dfs (left);
            if (right!=NULL)
            dfs (right);
        }
        
};