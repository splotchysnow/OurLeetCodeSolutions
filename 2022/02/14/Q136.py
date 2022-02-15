from typing import List

"""
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one
"""
def singleNumber(nums: List[int]) -> int:
    first_Appearance = set()
    second_Appearance = set()

    for num in nums:
        if num in first_Appearance and num not in second_Appearance:
            second_Appearance.add(num)
        if num not in first_Appearance:
            first_Appearance.add(num)
    for A in first_Appearance:
        if A not in second_Appearance:
            return A