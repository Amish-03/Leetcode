#include<map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        map <char,int>freq1;
        map <char,int>freq2;
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2)
        return 0;
        for(int i=0;s[i]!='\0';i++)
        {
            freq1[s[i]]++;
        }
        for(int i=0;t[i]!='\0';i++)
        {
            freq2[t[i]]++;
        }

        for(int i=0;s[i]!='\0';i++)
        {
            if(freq1[s[i]]!=freq2[s[i]])
            {
                return 0;
            }
        }
        return 1;
    }
};