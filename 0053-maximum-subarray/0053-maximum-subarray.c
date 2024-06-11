int maxSubArray(int* nums, int numsSize) 
{
    int sum=0;
    int maxSum=-10000;

    for(int i=0;i<numsSize;i++)
    {
        sum+=nums[i];
        maxSum=max(sum,maxSum);
        if(sum<0)
            sum=0;
    }

    return maxSum;
}

int max(int a,int b)
{
    return a>b?a:b;
}