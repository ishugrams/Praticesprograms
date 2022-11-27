#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
   float per;

   per =(float) iNo2/iNo1*100;

   return per;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet;

    printf("Please enter total marks\n");
    scanf("%d",&iValue1);

    printf("please enter obtained marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("percentage is =%.2f%%",fRet);


    return 0;
}