main()
{
   int X;
   char m ;
    printf("Input Student Number:\n");
    scanf("%d",& X);
    m=(X>=90)?'A':((X>=80)?'B':((X>=70)?'C':((X>=60)?'D':'F')));
    printf("The Grade of Student is %c", m);


}
