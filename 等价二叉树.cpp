﻿/**
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
    /*
     * @param a: the root of binary tree a.
     * @param b: the root of binary tree b.
     * @return: true if they are identical, or false.
     */
    bool isIdentical(TreeNode * a, TreeNode * b) {
        // write your code here
     if(!a && !b)
            return true;
        else if(!a && b)
            return false;
        else if(a && !b)
            return false;
        else {
            if(a->val != b->val)
                return false;
            else
                return isIdentical(a->left, b->left) && isIdentical(a->right, b->right);
        }
            
    }
};