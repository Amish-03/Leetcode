int removeElement(int* nums, int numsSize, int val) 
{
    int count=0;
    int j=0,i=0;
    int b[103];
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]!=val)
            count++;
    }

    i=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]!=val)
        {
            b[j]=nums[i];
            j++;
        }
    }

    for(i=0;i<j;i++)
    {
        nums[i]=b[i];
    }


    return count;
}