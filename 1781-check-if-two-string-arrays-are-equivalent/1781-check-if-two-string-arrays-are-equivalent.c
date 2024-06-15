#include<string.h>
char* mixed(char** strings,int size)
{
    int num=0,totallen=1,i;
    for( i=0;i<size;i++)
    {
        totallen+=strlen(strings[i]);
    }
    char* len=(char*)malloc(totallen*sizeof(char));

    len[0]='\0';

    for(i=0;i<size;i++)
    {
        strcat(len,strings[i]);
    }

    return len;

}
bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    char* len1,*len2;
    
    
    len1=mixed(word1,word1Size);
    len2=mixed(word2,word2Size);

    bool ans= strcmp(len1,len2)==0;
    free(len1);
    free(len2);

    return ans;
}

