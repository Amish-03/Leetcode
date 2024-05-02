class Solution(object):
    def findMaxK(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        max=0
        for cur in nums:
            if cur*-1 in nums and cur>max:
                max=cur
        if max!=0:
            return max
        else:
            return -1
        