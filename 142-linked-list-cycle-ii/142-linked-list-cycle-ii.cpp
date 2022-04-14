/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        ListNode*slow=head;
        ListNode*fast=head;
        
    while(slow && fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
              while(slow!=head) 
            {
                slow=slow->next;
                head=head->next;
            }
            return head;
          }
                
        }
        
        return NULL;
        }
};