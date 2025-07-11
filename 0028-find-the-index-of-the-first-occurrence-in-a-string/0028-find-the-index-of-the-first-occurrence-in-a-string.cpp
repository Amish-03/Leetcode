class Solution {
public:
    int strStr(string haystack, string needle) {
        int size1=needle.size();
        int size2=haystack.size();
        if(size1==0) return 0;
        for(int i=0;i<=size2-size1;i++)
        {
            int j=0;
            
                while (j < size1 && haystack[i + j] == needle[j])
                {
                    j++;
                    
                }
                if(j==size1)
                        return i;
            
        } 
        return -1;
    }
};