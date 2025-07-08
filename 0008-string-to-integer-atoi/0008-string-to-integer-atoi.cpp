class Solution {
public:
    int myAtoi(string s) {
        int cur=0;
        while(s[cur]==' ')
            cur++;
        int flag=-1;
        if(s[cur]!='-')
            flag=1;

        if(s[cur]=='+'||s[cur]=='-')
            cur++;
        long long ans=0;
        while(s[cur]!='\0' && isdigit(s[cur]))
        {
            ans=ans*10 + (s[cur]-'0');
            cur++;  

            if(flag==1 && ans>=INT_MAX)
                return INT_MAX;
            if(flag==-1 && -ans<=INT_MIN)
                return INT_MIN;      
        }
        
        return flag*ans;
    }
};