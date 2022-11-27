#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
   int iCnt = 0;

    for (iCnt = 1; iCnt <=(iNo/2); iCnt++)
    {
        if( (iCnt % 2 == 0))
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}    

int main()
{
    int iValue = 0;
    BOOL bret = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);


    bret = ChkEven(iValue);

    if(bret == TRUE)
    {
        printf("%d  is a even number\n",iValue);
    }
    else
    {
        printf("%d is not even  number\n",iValue);
    }

    return 0;
}
