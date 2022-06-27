// // #include <iostream>
// // #include <string>
// // #include <map>
// // #include <unordered_map>
// // #include <algorithm>
// // #include <set>


// // using namespace std;
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* head1Ptr = list1;
//         ListNode* head2Ptr = list2;
//         ListNode* tempPtr;
        
//         //Edge Cases
//         if(head1Ptr == nullptr && head2Ptr != nullptr){
//             return head2Ptr;
//         }
//         else if(head1Ptr != nullptr && head2Ptr == nullptr){
//             return head1Ptr;
//         }
//         else if(head1Ptr == nullptr && head2Ptr == nullptr){
//             return head1Ptr;
//         }
        
//         // ListNode head;
        
//         //Find the first node as head first:
//         ListNode* headNode;
//         if(head1Ptr->val <= head2Ptr->val){
//             cout << "here";
//             headNode = head1Ptr;
//             while(head1Ptr != nullptr && head2Ptr != nullptr){
//                 if(head1Ptr->val <= head2Ptr->val){
                    
//                     //--------- debug ----------//
//                     cout << "Head1Ptr->val = " << head1Ptr->val << endl;
//                     cout << "Head2Ptr->val = " << head2Ptr->val << endl;
//                     //--------- debug ----------//
                    
//                     tempPtr = head1Ptr;
//                     head1Ptr = head1Ptr->next;
//                     tempPtr->next = head2Ptr;
//                 }
//                 else{
//                     //This means that the head2Ptr is smaller than head1.
//                     tempPtr = head2Ptr;
//                     head2Ptr = head2Ptr->next;
//                     tempPtr->next = head1Ptr;
//                 }
//             }
//         }
//         else{
//             // cout << "here";
//             headNode = head2Ptr;
//             while(head1Ptr != nullptr && head2Ptr != nullptr){
//                 if(head2Ptr->val >= head1Ptr->val){
//                     tempPtr = head2Ptr;
//                     head2Ptr = head2Ptr->next;
//                     tempPtr->next = head1Ptr;
//                 }
//                 else{
//                     tempPtr = head1Ptr;
//                     head1Ptr = head1Ptr->next;
//                     tempPtr->next = head2Ptr;
//                 }
//             }
//         }
        
//         return headNode;
//     }
// };