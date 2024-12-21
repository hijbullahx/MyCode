#include<stdio.h>
#include<math.h>
main()
{
    int units;
    char Names [20];
    float Charge, Surcharge;
math:
    printf("Enter the consumer name:\n");
    scanf("%s", Names);
    printf("Enter used units:\n");
    scanf("%d", &units);
    Charge = (units<=200)?(units*0.8)
    :((units<=300)?(units*0.90)
    :(units>300)?(units*1)
    :(0));
    Charge += 100;
    Surcharge =(Charge>400)?(Charge*0.15):0.0;
    Charge += Surcharge;
    printf("Name of Users:%s\n", Names);
    printf("Total charges:%f\n", Charge);
goto math;
}
