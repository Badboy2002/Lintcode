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
     * @param ListNode l1 is the head of the linked list
     * @param ListNode l2 is the head of the linked list
     * @return: ListNode head of linked list
     */
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        // write your code here
        vector<int> save;
        ListNode *pos;
        pos=l1;
        while (pos !=NULL)
        {
            save.push_back(pos->val);  //读取一号链表
            pos=pos->next;
        }
        pos=l2;
        while (pos != NULL)
        {
            save.push_back(pos->val);  //读取二号链表
            pos=pos->next;
        }
        sort (save.begin(),save.end());  //数值排序
        ListNode *head=NULL,*pre;
		int n=0;
		while (n<save.size())
		{
			pos=new ListNode (save[n]);  //创建新的链表
			if (head==NULL)
				head=pos;
			else
				pre->next=pos;
			pre=pos;
			n++;
		}
        return head;
        
        
        
    }
};