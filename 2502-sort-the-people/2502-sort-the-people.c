/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** sortPeople(char** names, int n, int* heights, int heightsSize, int* returnSize) {
    *returnSize=n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
        {
            if(heights[j]<heights[j+1])
            {
                int temp=heights[j];
                heights[j]=heights[j+1];
                heights[j+1]=temp;

                char* tmpName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tmpName;
            }
        }
    return names;
}