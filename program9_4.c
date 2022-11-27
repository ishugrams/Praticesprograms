#include<stdio.h>

int OddFactorial(int iNo)
{
    if (iNo < 0)
    {
     iNo = -iNo;
    }
   
    int iCnt = 0;
    int fact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
        fact = fact*iCnt;
        }
    }
    return fact;


}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}