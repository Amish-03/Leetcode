#include<list>
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        list<int> ans;
        for(int num:nums)
        {
            if(num%2==0)
                ans.push_front(0);
            else
                ans.push_back(1);
        }
        return vector<int>(ans.begin(),ans.end());
    }
};