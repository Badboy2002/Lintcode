﻿/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) 
 *     {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param node: a node in the list should be deleted
     * @return: nothing
     */
    void deleteNode(ListNode *node) {
        // write your code here
        if (node==NULL||node->next==NULL)
            return ;
            
        ListNode *next;
        next=node->next;
        node->val=next->val;
        node->next=next->next;
        
        
    }
};