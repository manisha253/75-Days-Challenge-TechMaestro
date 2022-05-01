/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergelist(ListNode* a, ListNode* b)
    {
        ListNode* result = NULL;
        if (a == NULL)  
           return(b);  
        else if (b == NULL)  
           return(a);  
     
    if (a->val <= b->val)  
    {  
        result = a;  
        result->next = mergelist(a->next, b);  
    }  
    else
    {  
        result = b;  
        result->next = mergelist(a, b->next);  
    }  
    return(result);  
   }
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        if(lists.size()<1)
            return NULL;
        ListNode *head=lists[0];
        for(int i=1;i<lists.size();i++)
        {
            head=mergelist(head,lists[i]);
        }
        return head;
        
    }
};