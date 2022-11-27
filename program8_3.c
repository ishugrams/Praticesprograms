#include<stdio.h>


int Factorial(int  iNo)
{
    if (iNo < 0)
    {
     iNo = -iNo;
    }
   
    int iCnt = 0;
    int fact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        fact = fact*iCnt;
    }
    return fact;

}
int main()
{
    int iValue = 0, iRet =0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}