#include<string.h>

int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    bool seen[27]={0};
    for(int i=0;allowed[i]!='\0';i++)
    {
        seen[allowed[i]-'a']=1;
    }
    int count=0;
    for(int i=0;i<wordsSize;i++)
    {
        int flag=0;
        char curr[10005];
        strcpy(curr,words[i]);

        for(int j=0;curr[j]!='\0';j++)
        {
            if(!seen[curr[j]-'a'])
            {
                flag=1;

            }
        }
        count+=(flag==0);
    }
    return count;

}