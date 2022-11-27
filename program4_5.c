#include<stdio.h>

int SumNonFact(int iNo)
{
  int iCnt = 0;
    int iSum = 0;
    int iNSum = 0;
    int iDiff = 0;

    for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
     for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iNSum = iNSum + iCnt;
        }
    }
     iDiff = iSum - iNSum;
    return iDiff;
    
}
   

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d",iRet);
    return 0;
}