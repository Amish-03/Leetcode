class Solution(object):
    def counting(self,num):
        count=0
        while num>0:
            count+=num&1
            num>>=1
        return count
    
    def sumIndicesWithKSetBits(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        sum=0
        for i in range(len(nums)):
            if bin(i).count('1')==k:
                sum += nums[i]
        return sum