class Solution(object):
    def checkIfPangram(self, sentence):
        """
        :type sentence: str
        :rtype: bool
        """
        ans=set()
        for i in range(97,123):
            ans.add(i)
        for char in sentence:
            ans.discard(ord(char))

        return len(ans)==0
