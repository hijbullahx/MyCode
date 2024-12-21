main()
{
    int Months, Days;
    printf("Enter Days\n");
    scanf("%d", &Days);
    Months = Days/30;
    Days = Days % 30;
    printf("Months = %d Days = %d", Months, Days);
}
