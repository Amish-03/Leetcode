#include<string.h>
#define SIZE 100005
char stack1[SIZE];
int top;

void enqueue(char c)
{
    if(top==SIZE-1)
        return;
    stack1[++top]=c;
    
}

void dequeue()
{
    if(top==-1)
        return;
    top--;
}
char* removeStars(char* s) 
{
    top=-1;
    int n=strlen(s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!='*')
            enqueue(s[i]);
        else
        {
            dequeue();
            n--;
        }
            
    }
    char* ans = (char*)malloc((top + 2) * sizeof(char)); // +1 for '\0'
    for (int i = 0; i <= top; i++)
    {
        ans[i] = stack1[i];
    }
    ans[top + 1] = '\0'; 
    return ans;

}