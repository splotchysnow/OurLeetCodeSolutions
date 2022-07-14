// Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *curr = head;
        ListNode *sol = head;
        int h = 0;
        if(curr==nullptr){
            return nullptr; 
        }
        if(curr->next == nullptr){
            if(curr->val==val){
                return nullptr;
            }else{
                return head;
            }
        }else{
            if(curr->val==val){
                sol = curr->next; 
            }else{
                 h++;
            }
        }
        while(curr->next!=nullptr){
            if(curr->next->val == val){
                if(curr->next->next!=nullptr){
                    curr->next = curr->next->next;
                    if(curr->val==val){
                        sol = curr->next;
                    }
                    //curr = curr->next;
                }else{
                    curr->next = nullptr;
                }
                if(h==0&&curr->val!=val){
                    sol = curr;
                }
            }else{
                h++;
                curr = curr->next;
            }
        }
        if(h==0) return nullptr;
        return sol;
    }
};