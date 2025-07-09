#define SIZE 100005
char stack1[SIZE];
int top;
int count;
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
int minAddToMakeValid(char* s) {
    top=-1;
    count=0;

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='(')
            enqueue(s[i]);
        else if(top==-1)
        count++;
        else
            dequeue();
    }
    
        return top+count+1;
    
}