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
        ListNode * L3 = NULL, * res = NULL;       
        int carry = 0;
       
        while(l1!=NULL & l2!=NULL)
        {
            auto temp = l1->val + l2->val + carry;     
            if(temp>9)
            {
                carry = temp / 10;
                temp %= 10;
            }
            else
            {
                carry = 0;
            }
            
            if(res == NULL)
            {
                res = new ListNode(temp);
                L3 = res;
            }
            else
            {
                L3->next = new ListNode(temp);
                L3 = L3->next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
       
        while(l1!=NULL)
        {
            auto temp = l1->val + carry;
            if(temp>9)
            {
                carry = temp / 10;
                temp %= 10;
            }
            else
            {
                carry = 0;
            }
            if(res == NULL)
            {
                res = new ListNode(temp);
                L3 = res;
            }
            else
            {
                L3->next = new ListNode(temp);
                L3 = L3->next;
            }
            l1 = l1->next;     
        }
        while(l2!=NULL)
        {
            auto temp = l2->val + carry;
            if(temp>9)
            {
                carry = temp / 10;
                temp %= 10;
            }
            else
            {
                carry = 0;
            }
            if(res == NULL)
            {
                res = new ListNode(temp);
                L3 = res;
            }
            else
            {
                L3->next = new ListNode(temp);
                L3 = L3->next;
            }
            l2 = l2->next;
        }
        if(carry>0)
        {
            L3->next = new ListNode(carry);
        }
        return res;        
    }
};