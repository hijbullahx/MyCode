int main()
{
    int n, p=0, i;
    scanf("%d", &n);


    for(i=2; i<=(n-1); i++)
    {
        if (n%i==0)
        {
            p++;
            break;
        }
    }
    if (p==0)
    {
        printf("Prime Number");

    }
    else
    {
        printf("Not Prime Number");
    }
}
