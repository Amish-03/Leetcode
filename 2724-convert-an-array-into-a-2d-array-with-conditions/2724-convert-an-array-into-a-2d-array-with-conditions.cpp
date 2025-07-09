#include<map>
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int> freq;
        int n=nums.size();
        for(int num:nums)
        {
            freq[num]++;
        }

        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            vector<int> curRow;
            bool added=false;
            for(auto& it:freq)
            {
                if(it.second>0)
                {
                    curRow.push_back(it.first);
                    it.second--;
                    added=true;
                }
            }
            if(!added)break;
            ans.push_back(curRow);
        }
        return ans;

    }
};