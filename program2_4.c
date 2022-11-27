#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int i = 0;
    i = iNo;
    for(i = iNo; iFrequency < iNo; iFrequency++)
    {
        printf("%d\t",iNo);
    }

}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    printf("Enter the ferquency\n");
    scanf("%d",&iCount);

     
     Display(iValue,iCount);

    return 0;
}