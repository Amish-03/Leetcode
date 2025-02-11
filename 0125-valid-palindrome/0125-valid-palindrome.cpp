class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0)
            return 1;
        string s1,s2;
        int i;
        for(i=0;s[i]!='\0';i++)
        {
            if(isalnum(s[i]))
            {
                s1.push_back(tolower(s[i]));
                
            }
            
        }
        cout<<s1<<endl;
        s2=s1;
        int start=0;
        int end=s2.size()-1;
        char temp;
        while(start<end)
        {
            temp=s2[start];
            s2[start]=s2[end];
            s2[end]=temp;

            start++;
            end--;
        }

        if(s1==s2)
            return 1;
        else
            return 0;
        
    }
};