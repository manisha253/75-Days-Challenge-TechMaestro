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
    bool isPalindrome(ListNode* head) 
    {
        stack<int> v;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push(temp->val);
            temp=temp->next;
        }
        while(head!=NULL)
        {
            int i=v.top();
            v.pop();
            if(head->val!=i)
            {
                return false;
            }
            head=head->next;
        }
        return true;
    }
};
