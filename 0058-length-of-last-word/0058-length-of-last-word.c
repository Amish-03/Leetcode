int lengthOfLastWord(char* s) {
    int start=0,i,end,length=0;
    char temp;
    for(i=0;s[i]!='\0';i++)
    {
        length++;
    }
    end=length-1;
    printf("%d",length);

    while(start<end)
    {
        temp=s[start];
        s[start]=s[end];
        s[end]=temp;

        start++;
        end--;
    }
    printf("\n%s",s);
    start=0;
    length=0;

    while(s[start]==' '&&s[start]!='\0')
    start++;

    start++;

    while(s[start]!=' '&&s[start]!='\0')
    {
        length++;
        start++;
    }
    return ++length;
}