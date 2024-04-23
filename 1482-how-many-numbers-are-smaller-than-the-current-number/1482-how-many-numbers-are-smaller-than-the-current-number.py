class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        sorted_nums = sorted(nums)  # Sort the input list
        
        result = []
        for num in nums:
            count = sorted_nums.index(num)  # Find the index of num in the sorted list
            result.append(count)
        
        return result
