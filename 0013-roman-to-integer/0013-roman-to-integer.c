int curval=0;
int decoded(char a,char b)
{
    int val=0;
    if(a=='I'&&b=='V')
    {
            curval=4;
            val=1;
    }
    else if(a=='I'&&b=='X')
    {
        curval=9;
        val=1;
    }
    else if(a=='X'&&b=='L')
    {
        curval=40;
        val=1;
    }
    else if(a=='X'&&b=='C')
    {
        curval=90;
        val=1;
    }
    else if(a=='C'&&b=='D')
    {
        curval=400;
        val=1;
    }
    else if(a=='C'&&b=='M')
    {
        curval=900;
        val=1;
    }
    else if(a=='I'&&(b!='V'||b!='X'))
    {
        curval=1;
        val=0;
    }
    else if(a=='V')
    {
        curval=5;
        val=0;
    }
    else if(a=='X'&&(b!='L'||b!='C'))
    {
        curval=10;
        val=0;
    }
    else if(a=='L')
    {
        curval=50;
        val=0;
    }
    else if(a=='C'&&(b!='D'||b!='M'))
    {
        curval=100;
        val=0;
    }
    else if(a=='D')
    {
        curval=500;
        val=0;
    }
    else if(a=='M')
    {
        curval=1000;
        val=0;
    }
    return val;
}

int romanToInt(char* s) {
    int value=0,i,flag;
    for(i=0;s[i]!='\0';i++)
    {
        flag=decoded(s[i],s[i+1]);
        value+=curval;
        if(flag==1)
        i++;
    }
    
    return value;
}