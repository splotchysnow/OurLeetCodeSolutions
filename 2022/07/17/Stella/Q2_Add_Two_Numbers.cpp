// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sol = new ListNode;
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* curr3 = sol;
        //int 
        while(curr1!=nullptr && curr2!=nullptr){
            //if()
            curr3->val = curr1->val + curr2->val;
            curr1 = curr1->next;
            curr2 = curr2->next;
            curr3->next = new ListNode;
            curr3 = curr3->next;
        }
        return sol;
    }
};