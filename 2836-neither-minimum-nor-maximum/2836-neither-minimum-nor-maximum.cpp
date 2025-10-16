class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        if(n<=2)
            return -1;

        int max=nums[0];
        int min=nums[0];

        for(int i=0;i<n;i++)
        {
            max=(nums[i]>max)?nums[i]:max;
            min=(nums[i]<min)?nums[i]:min;
        }

        for(int i=0;i<n;i++)
        {
            if(nums[i]!=max && nums[i]!=min)
                return nums[i];
        }

        return -1;
    }
};