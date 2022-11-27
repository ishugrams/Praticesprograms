void Display(int iNo)
{
    int iCnt = 0;
    int i = 0;
    int c = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",-iCnt);

    }
    printf("%d\t",c);
     for(i = 1; i <= iNo; i++)
    {
        printf("%d\t",i);

    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}