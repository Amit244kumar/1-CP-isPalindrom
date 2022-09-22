int isPolindrom(int n)
{
    int i=n,j=0;
    if(n<0)
        return 0;
    while(n>9)
    {
        j=10*(j+n%10);
        n/=10;
    }
    j+=n;
    if(i==j)
        return 1;
    else
        return 0;
}

