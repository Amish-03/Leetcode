class Solution(object):
    def sortSentence(self, s):
        """
        :type s: str
        :rtype: str
        """
        parts=s.split(" ")
        ans=[""]*len(parts)
        for word in parts:
            num=int(word[-1])
            ans[num-1]=word[:-1]
        return " ".join(ans)


        