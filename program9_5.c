#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
    int iCnt = 0;
    int Efact = 1;
    int Ofact = 1;
    int Diff = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
        Efact = Efact * iCnt;
        }
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            Ofact = Ofact * iCnt;
        }
    }
    Diff = Efact - Ofact;
    return Diff;
}
int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&ivalue);

    iRet = FactorialDiff(ivalue);

    printf("factorical diffreance is %d",iRet);

    return 0;
}