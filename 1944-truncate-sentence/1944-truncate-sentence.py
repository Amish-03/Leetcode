class Solution(object):
    def truncateSentence(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """

        list1=s.split(" ")
        print(list1)
        return ' '.join(list1[:k])
        
        