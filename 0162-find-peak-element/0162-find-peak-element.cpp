class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 0;
        else if(n==2)
            return (nums[0]>nums[1])?0:1;
        
        int start=0;
        int end=n-1;
        int mid;

        while(start<end)
        {
            mid=start + (end-start)/2;

            if(nums[mid]>nums[mid+1])
                end=mid;
            else
                start=mid+1;
            
        }
        return start;
    }
};