'''
For an integer array nums, an inverse pair is a pair of integers [i, j] 
where 0 <= i < j < nums.length and nums[i] > nums[j].

Given two integers n and k, return the number of different arrays consist of numbers from 1 to n 
such that there are exactly k inverse pairs. 

Since the answer can be huge, return it modulo 109 + 7.
'''

"""
Current Plan:
EDGE CASES:
If K = 0:
Return the array in the direct order. 1 way.

If N = 0:
There is no way of having order pairs.



"""

class Solution:
    def kInversePairs(self, n: int, k: int) -> int:\
        
        pass
     

def main():
    a = Solution()
    b = a.kInversePairs(n = 3, k = 0)
    print("Test1", b == 1, b)
    b = a.kInversePairs(n = 3, k = 1)
    print("Test2", b == 2, b)
    
if __name__ == "__main__":
    main()