#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("$  *\t");
    }

}
int main()
{
    int iValue = 0;

    printf("enter the number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}