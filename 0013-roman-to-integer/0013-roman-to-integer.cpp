class Solution {
public:
    int flag;
    int return_val(char cur, char next)
    {
        int val=0;
        if(cur=='I'&& next!='V'&&next!='X')
        {
            val=1;
            flag=0;
        }
        else if(cur=='V')
            {
            val=5;
            flag=0;
        }
        else if(cur=='X'&& next!='L'&&next!='C')
            {
            val=10;
            flag=0;
        }
        else if(cur=='L')
            {
            val=50;
            flag=0;
        }    
        else if(cur=='C'&& next!='D'&&next!='M')
            {
            val=100;
            flag=0;
        }
        else if(cur=='D')
            {
            val=500;
            flag=0;
        }
        else if(cur=='M')
            {
            val=1000;
            flag=0;
        }
        else if(cur=='I'&&next=='V')
            {
            val=4;
            flag=1;
        }
        else if(cur=='I'&&next=='X')
            {
            val=9;
            flag=1;
        }
        else if(cur=='X'&&next=='L')
            {
            val=40;
            flag=1;
        }
        else if(cur=='X'&&next=='C')
            {
            val=90;
            flag=1;
        }
        else if(cur=='C'&&next=='D')
            {
            val=400;
            flag=1;
        }
        else if(cur=='C'&&next=='M')
            {
            val=900;
            flag=1;
        }

        return val;
    }

    int romanToInt(string s) 
    {
        int sum=0;
        
        for(int i=0;s[i]!='\0';i++)
        {
            sum+=return_val(s[i],s[i+1]);
            if(flag==1)
            i++;
        }    
        return sum;
    }

    
};