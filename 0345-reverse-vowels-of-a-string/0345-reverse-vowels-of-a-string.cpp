class Solution {
public:
    bool isVowel(char a)
    {
        a=tolower(a);
        return a=='a'||a=='e'||a=='i'||a=='o'||a=='u';
    }
    string reverseVowels(string s) {
        int n=s.size();
        int start=0, end=n-1;
        while(start<=end)
        {
            while(start<end && !isVowel(s[start]))
            {
                start++;
            }
            while(start<end && !isVowel(s[end]))
            {
                end--;
            }

            char temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
        return s;
    }
};