class Solution {
public:
    int addDigits(int num) {
        int n1=num;
        int digit,sum=0;
        while(n1/10!=0)
        {
            int n2=n1;
            sum=0;
            while(n2>0)
            {
                digit=n2%10;
                sum+=digit;
                n2=n2/10;
            }
            n1=sum;
        }
        return n1;
    }
};