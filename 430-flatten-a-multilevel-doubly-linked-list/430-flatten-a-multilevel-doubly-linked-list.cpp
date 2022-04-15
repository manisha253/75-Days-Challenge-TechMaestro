/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
//dfs
//whenever there is child explore it.
//recursion or
//stack
class Solution 
{
    private:
    Node* to_flatten(Node*head)
    {
        Node* tail=head;
        while(head!=NULL)
        {
            if(head->child)
            {
                tail=to_flatten(head->child);
                if(head->next) 
                    head->next->prev = tail;
                tail->next=head->next;
                head->child->prev=head;
                head->next = head->child;
                head->child=NULL;
            }
            tail = head;
            head = head->next;
        }
        return tail;
    }
        
public:
    Node* flatten(Node* head) {
        Node *ptr = to_flatten(head);
        return head;
    }
	
};