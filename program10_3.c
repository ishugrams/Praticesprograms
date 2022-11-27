#include<stdio.h>

int KMtoMeter(int iNo)
{
     int iCnt = 0;
    iCnt = iNo * 1000;
    return iCnt;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d",iRet);

    return 0;
}