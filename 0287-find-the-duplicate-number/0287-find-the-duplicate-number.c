int findDuplicate(int* nums, int numsSize) {
     int *A = (int*)calloc(numsSize, sizeof(int));
        int dup;
    for(int i=0;i<numsSize;i++)
    {
        A[nums[i]]++;
        if(A[nums[i]]>1)
        {
            dup= nums[i];
            break;
        }
    }
    free(A);
    return dup;
}