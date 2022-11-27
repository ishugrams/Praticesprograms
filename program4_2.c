#include<stdio.h>
void FactRev(int iNo)
{
    int iCnt = 0;
    int Arr[];
    int iDigit = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
             printf("%d",iCnt);
            iDigit = iCnt % 10;
            iNo = iCnt/10;
            printf("%d",iDigit);
        }
    }         
}
int main()
{
    int iValue = 0;

    printf("Enter the  number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}