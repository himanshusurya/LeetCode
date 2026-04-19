/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        if (!head) return nullptr;
        Node* cur = head;
        while (cur)
        {
            Node* copy  = new Node(cur->val);
            copy->next  = cur->next;   // 1'->next = 2
            cur->next   = copy;        // 1->next  = 1'
            cur         = copy->next;  // advance to 2
        }
        cur = head;
        while (cur) 
        {
            if (cur->random)
            { 
                cur->next->random = cur->random->next;
            }
            cur = cur->next->next;  // skip copy, go to next original
        }

        cur = head;
        Node* copyHead = head->next;  // head of the copied list

        while (cur) 
        {
            Node* copy  = cur->next;
            cur->next   = copy->next;          // restore original list
            copy->next  = copy->next           // wire copy list
                          ? copy->next->next
                          : nullptr;
            cur         = cur->next;           // advance to next original
        }
        return copyHead;
    }
};