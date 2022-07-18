//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //Create a dummy node, then it would be much easier to get rid of the dummy cases.
        ListNode dummyNode;
        ListNode* tail;

        //While these two are not null ptr:
        while (list1 && list2){

            if(list1->val > list2->val){
                tail->next = list2; // The smaller one goes on tail.
                list2 = list2->next;
            }
            else{
                tail->next = list1;
                list1 = list1->next;
            }
            tail = tail->next;
        }

        //either one will be empty now.
        if(list1){
            //Connect the rest.
            tail->next = list1;
        }
        else if(list2){
            tail->next = list2;
        }
    }
};