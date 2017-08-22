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
     * @return: head node
     */
    ListNode *deleteDuplicates(ListNode *head) {
        // write your code here
        if (head==NULL)
            return head;
        ListNode *pos;
        pos=head;
        while (pos->next != NULL)
        {
            if (pos->val==pos->next->val)
            {
                pos->next=pos->next->next;
            }
            else
            {
                pos=pos->next;
            }
        }
        return head;
    }
};