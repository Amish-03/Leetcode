/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize) {
    *returnSize = encodedSize+1;
    int * arr= (int*)malloc((*returnSize)*sizeof(int));
    arr[0]=first;
    for(int i=0;i<encodedSize;i++)
    {   
        arr[i+1]=encoded[i]^arr[i];
    }
    return arr;
}