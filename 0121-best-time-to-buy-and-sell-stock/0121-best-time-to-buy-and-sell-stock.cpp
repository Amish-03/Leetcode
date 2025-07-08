class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit=0;

        for(int cur: prices)
        {
            minPrice = min(minPrice,cur);
            maxProfit = max(maxProfit,cur-minPrice);
        }

        return maxProfit;
    }
};