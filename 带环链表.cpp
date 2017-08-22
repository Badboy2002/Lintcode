/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @return: True if it has a cycle, or false
     */
    bool hasCycle(ListNode *head) {
        // write your code here
        if (head==NULL||head->next==NULL)
            return false;
        
        ListNode *fast,*slow;
        fast=head->next;
        slow=head;
     
        
        while (slow != fast)
        {
            if (fast==NULL || fast->next==NULL)
                return false;
            fast=fast->next->next;
            slow=slow->next;
        }
        return true;
    }
};


