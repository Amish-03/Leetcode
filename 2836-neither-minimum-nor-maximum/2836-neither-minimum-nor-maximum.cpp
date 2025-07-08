class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int max=INT_MIN;
        int min=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            max=(nums[i]>max)?nums[i]:max;
            min=(nums[i]<min)?nums[i]:min;
        }

        for(int i=0;i<n;i++)
        {
            if(nums[i]>min && nums[i]<max)
                return nums[i];
        }
        return -1;
    }
};