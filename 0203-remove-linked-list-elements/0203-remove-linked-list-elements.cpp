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
    ListNode* removeElements(ListNode* head, int val) 
    {
        auto itr = head;
        if(head == NULL)        
            return head;
        while(itr != NULL && itr->val == val)
        {
            head = head->next;
            itr = head;
        }
        
        while(itr != NULL)
        {
            if(itr->next != NULL && itr->next->val == val)
            {
                itr->next = itr->next->next;
            }
            else
            {
                itr = itr->next;
            }
        }
        return head;
    }
};