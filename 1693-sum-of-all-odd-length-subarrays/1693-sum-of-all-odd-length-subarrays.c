int sumOddLengthSubarrays(int* arr, int arrSize) {
   int start,end,sum=0,length,i;

   for(start=0;start<arrSize;start++)
   {
        for(end=start;end<arrSize;end++)
        {
            length=end-start+1;
            if(length%2==1)
            {
                for(i=start;i<=end;i++)
                {
                    sum+=arr[i];
                }
            }
        }
   }
    
   return sum;
}