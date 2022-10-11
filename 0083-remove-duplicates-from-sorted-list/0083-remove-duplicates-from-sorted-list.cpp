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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode * start = head;
        
        while(start != NULL)
        {
            while(start->next && start->val == start->next->val)
            {
                auto temp = start->next;
                start->next = start->next->next;
                delete(temp);
            }
            start = start->next;
        }
     return head;   
    }
};