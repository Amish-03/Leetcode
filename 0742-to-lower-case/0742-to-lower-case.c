char* toLowerCase(char* s) {
    int i,len=strlen(s);
    for(i=0;i<len;i++)
    {
        s[i]=tolower(s[i]);
        printf("%c",s[i]);
    }

    return s;
}