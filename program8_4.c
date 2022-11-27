#include<stdio.h>

void TableRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    printf("Table is :\n");
    int iCnt =0;
    int Table = 0;
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
       Table = iNo * iCnt;
       printf("%d\n",Table);
    }
}
int main()
{
    int iValue = 0;
     printf("Enter the number for table\n");
     scanf("%d",&iValue);

     TableRev(iValue);


    return 0;
}