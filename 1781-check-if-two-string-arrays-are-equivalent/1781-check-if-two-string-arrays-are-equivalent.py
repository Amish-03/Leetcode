class Solution(object):
    def arrayStringsAreEqual(self, word1, word2):
        """
        :type word1: List[str]
        :type word2: List[str]
        :rtype: bool
        """
        ans1=""
        ans2=""
        for i in word1:
            ans1=ans1+i
        for i in word2:
            ans2=ans2+i

        return ans1==ans2
        