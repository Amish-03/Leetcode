class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j;
        int k;
        int n=nums.size();
        k=n;
        while(i<k-1)
        {
            if(nums[i]==nums[i+1])
            {
                for(j=i;j<k-1;j++)
                {
                    nums[j]=nums[j+1];
                }
                k--;
            }
            else
            i++;
        }
        return k;
    }
};