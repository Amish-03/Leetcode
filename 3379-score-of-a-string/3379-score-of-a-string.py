class Solution(object):
    def scoreOfString(self, s):
        """
        :type s: str
        :rtype: int
        """
        sum1=0
        for i in range(len(s)-1):
            sum1+=abs(ord(s[i])-ord(s[i+1]))
        return sum1
        