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
    ListNode* reverseList(ListNode* head) 
    {
        if(head == NULL || head->next ==NULL)
            return head;
        ListNode* prev = NULL, *cur = head, *next = NULL;

        while(cur != NULL)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur  = next;            
        }
        return prev;        
    }
    ListNode* findMiddle(ListNode* head)
    {
        ListNode* fastptr = head;
        ListNode* slowptr = head;
        while(fastptr != NULL && fastptr->next != NULL)
        {
            fastptr = fastptr->next->next;
            slowptr = slowptr->next;
        }
        return slowptr;
    }
    bool isPalindrome(ListNode* head) 
    { 
        ListNode* middle = findMiddle(head);
        middle = reverseList(middle);
        ListNode* cur = head;
        while(middle != NULL)
        {
            if(middle->val != cur->val)
            {
                return false;
            }
            middle = middle->next;
            cur = cur->next;
        }
        return true;
    }
};