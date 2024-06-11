int numIdenticalPairs(int* nums, int numsSize) 
{
     int A[101]={0};
    int i;
     
     int count=0;
     for(i=0;i<numsSize;i++)
     {
        count+=A[nums[i]];
        A[nums[i]]++;
     }

     return count;
}