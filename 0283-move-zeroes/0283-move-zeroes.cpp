class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i =0;
        vector<int> new_n;
        int c =0;
        for(i=0;i<n;i++)
        {
            if(nums[i]!=0){
                new_n.push_back(nums[i]);
            }
            else{
                c++;
            }
        }
        int j=0;
        for(j = 0;j<new_n.size();j++){
            nums[j]=new_n[j];
        }
        while(j<n)
        {
            nums[j]=0;
            j++;
        }

    }
};