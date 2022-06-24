class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        
        # List[int]
        # type val int
        # rtype: int

        # for num in nums:
        #     if(num == val):
        #         # Remove it and replace it:


        # count = 0;
        newList = []

        # turns all the items in the list to negative 1 if found.        
        for i in range(len(nums)):
            if(nums[i] == val):
                nums[i] = -1
                # count += 1
            if(nums[i] != -1):
                newList.append(nums[i])


        # Create a new list with the size - count:
        # newList[len(nums) - count]

        
        for i in range(len(newList)):
            nums[i] = newList[i]

        # for i in range(len(nums)):
        #     if(nums)
        
        return len(newList)
