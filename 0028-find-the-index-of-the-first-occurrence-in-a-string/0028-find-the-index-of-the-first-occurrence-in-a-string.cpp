class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())
            return -1;
        int n = needle.size();
        int i = 0, flag;
        int k=haystack.size()-needle.size()+1;
        for(i=0;i<k;i++)
        {
            if(haystack[i]==needle[0])
            {
                flag=0;
                for(int j=0;j<n;j++)
                {
                    if(needle[j]!=haystack[i+j])
                        break;
                    else
                        flag++;
                }
                if(flag==n)
                    return i;
            }
        }
        
        return -1;
    }
};