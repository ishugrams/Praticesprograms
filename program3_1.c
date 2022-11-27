#include<stdio.h>

void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return -1;
    }
    int i = 0;
    i = 1;
    for ( i = 1; i <= iNo; i++)
    {
        printf("%d\t",i * 2);
    }   
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}