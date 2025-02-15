#include<map>
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        map <char,int>freq1;
        map <char,int>freq2;

        for(int i=0;ransomNote[i]!='\0';i++)
        {
            freq1[ransomNote[i]]++;
        }
        for(int i=0;magazine[i]!='\0';i++)
        {
            freq2[magazine[i]]++;
        }
        int flag=1;
        for(int i=0;ransomNote[i]!='\0';i++)
        {
            if(freq2[ransomNote[i]]<freq1[ransomNote[i]])
                flag=0;
        }

        return flag;
    }
};