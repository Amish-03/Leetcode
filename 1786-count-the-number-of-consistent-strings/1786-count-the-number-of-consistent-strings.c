#include<string.h>

int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    bool seen[26]={0};
    for(int i=0;allowed[i]!='\0';i++)
    {
        seen[allowed[i]-'a']=1;
    }
    int count=0;
    for(int i=0;i<wordsSize;i++)
    {
        int flag=0;
        char* curr=words[i];


        for(int j=0;curr[j]!='\0';j++)
        {
            if(!seen[curr[j]-'a'])
            {
                flag=1;
                break;
            }
        }
        count+=(flag==0);
    }
    return count;

}