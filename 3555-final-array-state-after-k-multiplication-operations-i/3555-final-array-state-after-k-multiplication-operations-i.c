/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<limits.h>
int* getFinalState(int* nums, int n, int k, int multiplier, int* returnSize) {
    int min1=INT_MAX;
    *returnSize=n;
    int minindex=-1;

    for(int i=0;i<k;i++)
    {
        min1=INT_MAX;
        minindex=-1;
        for(int j=0;j<n;j++)
        {
            if(nums[j]<min1)
            {
                min1=nums[j];
                minindex=j;
            }
                
        }

        nums[minindex]*=multiplier;
        
    }

    return nums;

}