class Solution {
public:
    bool isPalindrome(string s) 
    {
        string new1;
        for(int i=0;s[i]!='\0';i++)
        {
            if(isalnum(s[i]))
            new1.push_back(tolower(s[i]));
        }  
        cout<<new1;
        int flag=1;
        int size=new1.size();
        for(int i=0;i<size;i++)
        {
            if(new1[i]!=new1[(size-1)-i])
            {
                flag=0;
                break;
            }
        }

        return flag;
    }
};