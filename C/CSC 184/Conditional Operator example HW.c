
int main()
{
    int X, Y, Z, m;
    printf("Enter The Value:\n");
    scanf("%d%d%d", &X, &Y, &Z);
    m = (X>Y)?(X>Z)?(X):(Z)
    :((Y>Z)?(Y):(Z));
    printf("The larger number is=%d", m);
}
