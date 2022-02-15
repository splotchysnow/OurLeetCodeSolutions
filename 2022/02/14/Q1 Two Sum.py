from typing import List

'''
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.'''


#
# def twoSum(nums: List[int], target: int) -> List[int]:
#     for i in range(0, len(nums)):
#         for j in range(i, len(nums)):
#             if nums[i] + nums[j] == target and i != j:
#                 return [i, j]
#     return []

# Faster solution:
def twoSum(nums: List[int], target: int) -> List[int]:
    check = {}

    for index, num in enumerate(nums):
        if target - num in check:
            return [index, check[target-num]]
        else:
            check[num] = index
    return []

print(twoSum([3, 2, 4], 6))
