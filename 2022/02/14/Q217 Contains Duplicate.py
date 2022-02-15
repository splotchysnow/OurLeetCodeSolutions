class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen_element = set()
        for num in nums:
            if num in seen_element:
                return True
            seen_element.add(num)
        return False

