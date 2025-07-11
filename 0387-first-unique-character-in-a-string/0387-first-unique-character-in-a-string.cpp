#include<unordered_map>
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> freq;
        for(int i=0;s[i]!='\0';i++)
        {
            freq[s[i]]++;
        }
        for(int i=0;s[i]!='\0';i++)
        {
            if(freq[s[i]]==1)
                return i;
        }
        return -1;
    }
};