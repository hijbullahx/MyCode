main()
{
    int u,bill,tbill,fbill;
    printf("Input The Units: ");
    scanf("%d",&u);
    bill=(u>0&&u<=200)?(u*0.8):((u>200&&u<=300)
        ?(160+(u-200)*0.9):(250+(u-300)));
    tbill=bill+100;
    fbill=(tbill>500)?(tbill+(tbill*0.15)):(tbill);
    printf("%d Taka",fbill);
}
