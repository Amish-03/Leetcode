#include<map>
class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> seen;
        for(char character:s)
        {
            seen[character]++;
        }
        
        for(char character: t)
        {
            if(--seen[character]<0)
                return character;
        }
        return 'a';
    }
};