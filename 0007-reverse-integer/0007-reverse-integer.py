class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        INT_MAX = 2**31 - 1
        INT_MIN = -2**31
        temp=x
        if temp<0:
            temp=temp*-1
        rev=0
        i=2
        while temp>0:
            digit=temp%10
            rev=rev*10+digit
            i-=1
            temp=temp/10
        if x<0:
            rev=rev*-1
        if rev < INT_MIN or rev > INT_MAX:
            return 0
        else:
            return rev
        