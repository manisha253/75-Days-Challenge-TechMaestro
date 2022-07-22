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
    ListNode* partition(ListNode* head, int x) {
        ListNode* curr=head;
        vector<int> l;
        vector<int> r;
        while(curr)
        {
            if(curr->val<x)
                l.push_back(curr->val);
            curr=curr->next;
        }
        curr=head;
        while(curr)
        {
            if(curr->val>=x)
                r.push_back(curr->val);
            curr=curr->next;
        }
        int left=l.size();
        int right=r.size();
        curr=head;
        int i=0,j=0;
        while(curr)
        {
            if(i<left)
                curr->val=l[i++];
            else if(j<right)
                curr->val=r[j++];
            curr=curr->next;
                
        }
        return head;
        
    }
};