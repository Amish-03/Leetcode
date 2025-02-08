int singleNumber(int* nums, int numsSize) 
{
    int xor=0;
    int i;
    for(i=0;i<numsSize;i++)
    {
        xor^=nums[i];
    }
    return xor;
    
    
}