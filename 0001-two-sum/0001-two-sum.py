from collections import Counter
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        freq = Counter(nums)

        for idx,num in enumerate(nums):
            if target-num in freq and nums.index(target-num)!=idx:
                return [idx, nums.index(target-num)]
