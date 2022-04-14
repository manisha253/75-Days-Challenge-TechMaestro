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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* p1=headA;
        ListNode* p2=headB;
        int l1=0,l2=0;
        int diff;
        while( p1!=NULL)
        {
            l1++;
            p1=p1->next;
        }
        while(p2!=NULL)
        {
            l2++;
            p2=p2->next;
        }
        p1=headA;
        p2=headB;
        if(l1>l2)
        {
            diff=l1-l2;
                for(int i=0;i<diff;i++)
                {
                    p1=p1->next;
                }
        }
        else
        {
            diff=l2-l1;
            for(int i=0;i<diff;i++)
            {
                p2=p2->next;
                
            }
        }
        while(p1!=p2)
        {
            p1=p1->next;
            p2=p2->next;
        }
        return p1;
        
    }
};