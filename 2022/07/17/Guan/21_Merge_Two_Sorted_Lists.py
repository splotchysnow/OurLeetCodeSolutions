# Definition for singly-linked list.
from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        pass
    #Ill just rewrite this in c++





def test():
    a = Solution()
    list1 = [1,2,4]
    list2 = [1,3,4]
    b = a.mergeTwoLists(list1,list2)
    print("Test1", b == [1,1,2,3,4,4], b)
    b = a.mergeTwoLists([], [])
    print("Test2", b == [], b)
    b = a.mergeTwoLists([], [0])
    print("Test3", b == [0], b)

if __name__ == "__main__":
    test()