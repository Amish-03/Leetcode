int findDuplicate(int* nums, int numsSize) {
     int *A = (int*)calloc(numsSize, sizeof(int));
    
    for(int i=0;i<numsSize;i++)
    {
        A[nums[i]]++;
        if(A[nums[i]]>1)
        {
            return nums[i];
        }
    }
    return -1;
}