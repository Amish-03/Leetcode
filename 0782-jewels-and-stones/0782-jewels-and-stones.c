#include<stdbool.h>
int numJewelsInStones(char* jewels, char* stones) {
   bool hash[256]={false};
   int i,count=0;

   for(i=0;jewels[i]!='\0';i++)
   {
        hash[(unsigned char)jewels[i]]=true;
   }

   for(i=0;stones[i]!='\0';i++)
   {
        if(hash[(unsigned char) stones[i]]==true)
            count++;
   }

   return count;
}
