/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode * head;
        int lenA = 0, lenB = 0, diff;
        head = headA;
        while(head)
        {
            lenA++;
            head = head->next;
        }
        head = headB;
        while(head)
        {
            lenB++;
            head = head->next;
        }
        diff = lenA - lenB;
        if(diff > 0)
        {
            head = headA;
        }
        else
        {
            head = headB;
        }
        diff = abs(diff);
        while(diff>0)
        {
            head = head->next;
            diff--;
        }
        if(lenA - lenB >0)
        {
            headA= head;
        }
        else
        {
            headB = head;
        }
        while(headA != headB)
        {
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};