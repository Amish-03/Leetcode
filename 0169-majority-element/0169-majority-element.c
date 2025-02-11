int majorityElement(int* nums, int numsSize) {
    int count=0,cur=0;

    for (int i=0;i<numsSize;i++) 
    {
        if (count==0) 
        {
            cur=nums[i];  
        }
        count+=(nums[i]==cur)?1:-1;
    }

    return cur;  

}