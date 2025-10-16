class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;
        int k=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            {
                k++;
                temp.push_back(nums[i]);
            }
        }

        for(int i=0;i<k;i++)
        {
            nums[i]=temp[i];
        }

        return k;
    }
};