#include<stdio.h>
void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("small\n");
    }
    if(iNo >= 50)
    {
        printf("medium\n");
    }
    if(iNo > 100)
    {
       printf("Large\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}