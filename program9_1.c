#include<stdio.h>

Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
    printf("*\t");
    }
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
    printf("#\t");
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