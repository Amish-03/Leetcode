class Solution {
public:
    bool isHappy(int n) 
    {
        if(n!=1&&n==2||n!=1&&n==3)
        return 0;
        int temp=n,digit,sum=0;
        for(int i=0;i<10000;i++)
        {
        while(temp>0)
        {
            digit=temp%10;
            sum+=digit*digit;
            temp=temp/10;
        }  
        temp=sum; 
        sum=0; 
        }
        if(temp==1)
        return 1;
        return 0;
    }
};