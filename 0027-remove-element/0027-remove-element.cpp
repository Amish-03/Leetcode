class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int n=nums.size(),j=0;
        if(n==0)
        {
            return 0;
        }
        int b[n];
        for (int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            {
                b[j++]=nums[i];
            }
        }
        for(int i=0;i<j;i++)
        {
            nums[i]=b[i];
        }
        return j;
    }
};