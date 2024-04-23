class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
    
        cursum=0
        ans=[]
        for i in range(len(nums)):
            cursum+=nums[i]
            ans.append(cursum)
        return ans
        