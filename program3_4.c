#include<stdio.h>

void DisplayConvert(char CValue)
{
    
    if ( CValue=='a' && CValue <='z')
    {
        CValue = CValue-32;
            printf("%C\n",CValue); 
    }

    else 
    if (CValue=='D' && CValue <='z')
    {
        CValue = CValue+32;
        printf("%C\n",CValue);

    }

    
}
int main()
{
    char cValue = '\0';

    printf("Enter the charecter\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}