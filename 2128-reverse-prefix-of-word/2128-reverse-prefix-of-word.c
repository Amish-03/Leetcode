char* reversePrefix(char* word, char ch) {
    int i;
    int len=strlen(word);
    for(i=0;i<len;i++)
    {
        if(word[i]==ch)
            break;
    }
    if(i==len)
        return word;
    char temp;
    int n=i;
    i=0;
    while(i<n)
    {
        temp=word[i];
        word[i]=word[n];
        word[n]=temp;
        i++;
        n--;
    }
    return word;
}