int reverse(int n)
{
    int i, d, rn=0;
    for(i=n; i!=0; i/=10)
    {
        d=i%10;
        rn=rn*10+d;
    }
    return rn;
}

void adam(int n)
{
    int r, sq, rvs, rr, rrvs;
    sq = n * n;
    rvs = reverse(sq);
    rr = reverse(n);
    r = sqrt(n);
    rrvs = r * r;
    if(rvs == rrvs)
    {
        printf("%d is an Adam Number", n);
    }
    else
    {
        printf("%d is not an Adam number", n);
    }
}
