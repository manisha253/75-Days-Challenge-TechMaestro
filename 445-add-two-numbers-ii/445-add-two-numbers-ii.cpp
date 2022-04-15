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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        if(l1== NULL)
        {
            return l2;
        }
        if(l2==NULL)
        {
            return l1;
        }
        stack<int> s1,s2,s3;
        while(l1!=NULL)
        {
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            s2.push(l2->val);
            l2=l2->next;
        }
        int carry=0;
        while(!s1.empty() && !s2.empty())
        {
            int add=carry+s1.top()+s2.top();
            s1.pop();
            s2.pop();
            s3.push(add%10);
            carry=add/10;
        }
        while(!s1.empty())
        {
            int add=carry+s1.top();
            s1.pop();
            s3.push(add%10);
            carry=add/10;
        }
        while(!s2.empty())
        {
            int add=carry+s2.top();
            s2.pop();
            s3.push(add%10);
            carry=add/10;
        }
        if(carry>0)
        {
            s3.push(carry);
        }
         ListNode* temp = new ListNode(0);
        ListNode* cur = temp;
        while(!s3.empty())
        {
            cur->next = new ListNode(s3.top());
            cur = cur->next;
            s3.pop();
        }
        
        return temp->next;
        
    }
};

        
       
       
        