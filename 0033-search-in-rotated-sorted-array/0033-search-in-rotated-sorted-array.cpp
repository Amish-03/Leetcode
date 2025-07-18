class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1;
        int mid;
        int val=-1;
        int pivot=-1;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[start]<=nums[mid])
            {
                if(nums[start]<=target && target<=nums[mid])
                {
                    end=mid-1;
                }
                else
                start=mid+1;
            }
            else 
            {
                if(nums[mid]<=target && target<=nums[end])
                {
                    start=mid+1;
                }
                else
                    end=mid-1;
            }

        }
        
        return val;

    }
};