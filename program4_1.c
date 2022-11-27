#include<stdio.h>
#define MAX 1000000000
int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for (iCnt = 1; iCnt * iCnt<= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            if (iNo/iCnt == iCnt)
            {
                iMult = (iMult * iCnt) % MAX;
            }
            else
            {
                iMult = (iMult * iCnt) % MAX;
                iMult = (iMult * iNo /iCnt) % MAX;
            }
            
        }
    }
    return iMult;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    
    return 0;
}