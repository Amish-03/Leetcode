#include<map>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> freq;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(freq[nums[i]])
                return 1;
            freq[nums[i]]++;
        }
        return 0;


    }
};