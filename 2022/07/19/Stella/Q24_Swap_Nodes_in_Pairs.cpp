// Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * unfinished
 */

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr = head;
        ListNode* x;
        ListNode* y;
        if(curr->next!=nullptr){
            x = curr;
            head = curr->next;
            head->next = x;
        }
        while(curr->next!=nullptr){
            x = curr;
            y = curr->next->next;
            curr = curr->next;
            curr->next = x;
            curr->next->next = y;
            curr = curr->next->next;
            if(curr == nullptr) break;
        }
        return head;
    }
};