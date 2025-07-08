class Solution {
public:
    bool areNumbersAscending(string s) {
        int i=0;
        int prev=-1;
        int cur=0;

        while(s[i]!='\0')
        {
            if(!isdigit(s[i]))
           {
            i++;
            continue;
           }
            
            cur=0;
           

           while(i<s.length() && isdigit(s[i]))
           {
            cur=cur*10+ (s[i]-'0');
            i++;
           }

           

            if(prev!=-1 && cur<=prev)
                return 0;

            prev=cur;

        }
        return 1;
    }
};