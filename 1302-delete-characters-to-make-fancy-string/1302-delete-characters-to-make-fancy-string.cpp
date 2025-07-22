class Solution {
public:
    string makeFancyString(string s) {
        string ans;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]==s[i+1]&&s[i]==s[i+2])
            {
                ans.push_back(s[i]);
                ans.push_back(s[i]);
                char cur=s[i];
                while(s[i]==cur && s[i]!='\0')
                    i++;
                i--;
            }
            else
                ans.push_back(s[i]);
        }
        return ans;
    }
};