class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum=0;
        for(int i=0;columnTitle[i]!='\0';i++)
        {
            sum=sum*26+(columnTitle[i]-'A'+1);
        }
        return sum;
    }
};