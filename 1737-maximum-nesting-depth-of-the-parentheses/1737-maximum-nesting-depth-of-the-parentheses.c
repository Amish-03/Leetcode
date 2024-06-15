int maxDepth(char* s) {
    int i,count=0,max1=0,len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]=='(')
            count++;
        
        if(s[i]==')')
            count--;

        max1=max(count,max1);
    }

    return max1;
}

int max(int a,int b)
{
    if(a==b)
        return a;
    return a>b?a:b;
}