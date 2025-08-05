from collections import Counter
class Solution(object):
    def getSneakyNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        freq=Counter(nums)

        ans=[]
        for key,value in freq.items():
            if(value==2):
                ans.append(key)

        return ans
