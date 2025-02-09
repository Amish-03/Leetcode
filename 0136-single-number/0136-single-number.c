int singleNumber(int* nums, int numsSize) 
{
    int i,max1=nums[0],offset=30000;
    for(i=0;i<numsSize;i++)
    {
        max1=(max1>nums[i])?max1:nums[i];
    }

    long long freq[60001];

    for(i=0;i<60001;i++)
    {
        freq[i]=0;
    }

    for(i=0;i<numsSize;i++)
    {
        freq[nums[i]+offset]++;
    }
    int val=0;
    for(i=0;i<60001;i++)
    {
        if(freq[i]==1)
        {
            val=i-offset;
            break;
        }
    }

    return val;
    
    
}