class Solution(object):
    def findWordsContaining(self, words, x):
        """
        :type words: List[str]
        :type x: str
        :rtype: List[int]
        """
        ans=[]
        for idx,word in enumerate(words):
            if x in word:
                ans.append(idx)
        return ans
                  
            
        