class Solution(object):
    def minimumOperations(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        total=0
        for num in nums:
            total+= min(num%3, 3-num%3)
        return total        