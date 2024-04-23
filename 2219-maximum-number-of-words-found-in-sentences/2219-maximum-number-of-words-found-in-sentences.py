class Solution(object):
    def mostWordsFound(self, sentences):
        """
        :type sentences: List[str]
        :rtype: int
        """
        max1=0
        for i in range(len(sentences)):
            curCount=sentences[i].count(" ")
            max1=max(max1,curCount)
        return max1+1
        