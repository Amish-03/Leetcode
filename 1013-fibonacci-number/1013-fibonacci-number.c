

int fib(int n){
    if(n==0)
        return 0;
    int a[100];
    a[0]=1;
    a[1]=1;
    
    for(int i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    return a[n-1];
}
