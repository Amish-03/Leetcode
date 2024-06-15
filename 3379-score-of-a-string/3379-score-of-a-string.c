int scoreOfString(char* s) {
    int i;
    int len=strlen(s);
    int diff=0,sum=0;
    for(i=0;i<len-1;i++)
    {
        diff=s[i]-s[i+1];
        if(diff<0)
            diff*=-1;
        sum=sum+diff;
    }

    return sum;
}