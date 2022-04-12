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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode *temp, *temp1;
        temp=head;
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
         cout<<c<<endl;
         temp = head;
       int  pos=c-n;
        if(pos==0)
        {
            head=temp->next;
            return head;
        }
         else{
        for(int i=0;i<pos-1 &&temp!=NULL;i++)
            temp=temp->next;
           
        temp1=temp->next->next;
        temp->next=temp1;
        
         }
         return head;
     }
};