#include<stdio.h>

void DisplayEven(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i<=(iNo/2);i++)
    {
        if ((iNo % i == 0)&&(i % 2 == 0 ))
        {
            printf("%d\t",i);
        }
        
    }
    
       
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");

    scanf("%d",&iValue);

    DisplayEven(iValue);

    return 0;
}   