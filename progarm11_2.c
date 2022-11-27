#include<stdio.h>

void RangeDisplayEven(int Start,int End)
{
    int icnt = 0;
    for(icnt = Start; icnt <= End; icnt++)
    {
        if(icnt % 2 == 0)
        {
        printf("%d\t",icnt);
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);
    return 0;
}