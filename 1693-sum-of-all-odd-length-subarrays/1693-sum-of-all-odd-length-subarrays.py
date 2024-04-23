class Solution(object):
    def sumOddLengthSubarrays(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        sum1=0

        for i in range(len(arr)):
            for j in range(i,len(arr),2):
                sum1+=sum(arr[i:j+1])  
        return sum1
               