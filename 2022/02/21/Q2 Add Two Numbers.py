# Definition for singly-linked list.
from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


def addTwoNumbers(l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
    """
        //Stored in reverse digit;

        Check if the first digit is more than the 10;
        Find the number added.

        if the next digit in both of the list adds up to be more than 10,
        Add 1 to the previous digit, then do the addition to check.

    """

    answer = ListNode()

    increment = False
    while l1.next | l2.next:

        if increment:
            answer.val = l1.val + l2.val + 1
            increment = False
        else:
            answer.val = l1.val + l2.val

        if l1.val + l2.val >= 10:
            increment = True

        l1 = l1.next
        l2 = l2.next



'''
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        result = ListNode(0)
        result_tail = result
        carry = 0
                
        while l1 or l2 or carry:            
            val1  = (l1.val if l1 else 0)
            val2  = (l2.val if l2 else 0)
            carry, out = divmod(val1+val2 + carry, 10)    
                      
            result_tail.next = ListNode(out)
            result_tail = result_tail.next                      
            
            l1 = (l1.next if l1 else None)
            l2 = (l2.next if l2 else None)
               
        return result.next
'''