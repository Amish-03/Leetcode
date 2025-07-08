class Solution {
public:
    bool selfdevide(int n)
    {
        int n1=n;
        int digit;
        while(n1>0)
        {
            digit=n1%10;
            if(digit==0)
            {
                return 0;
            }
            if(n % digit !=0)
                return 0;
            n1=n1/10;
        }
        return 1;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> a;

        for(int i=left;i<=right;i++)
        {
            if(selfdevide(i))
                a.push_back(i);
        }

        return a;
    }
};