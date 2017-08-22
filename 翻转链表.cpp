/**
 * Definition of ListNode
 * 
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 * 
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param head: n
     * @return: The new head of reversed linked list.
     */
    ListNode * reverse(ListNode * head) {
        // write your code here
        vector<int> vaul;
        ListNode *pos;
        pos=head;
        while (pos !=NULL)
        {
            vaul.push_back(pos->val);
            pos=pos->next;
        }
        
        int len=vaul.size()-1;
        pos=head;
        while (pos !=NULL&&len>=0)
        {
            pos->val=vaul[len];
            pos=pos->next;
            len--;
            
        }
        return head;
    }
};