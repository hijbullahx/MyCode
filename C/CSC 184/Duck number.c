void duck(int n)
{
    int i, r, flag=0;
    for(i=n; i!=0; i/=10)
    {
        r=i%10;
        if (r==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("%d is a Duck Number", n);
    }
    else
    {
        printf ("%d is not a Duck Number", n);
    }
}
main()
{
    int x;
    scanf("%d",&x);
    duck(x);
}
