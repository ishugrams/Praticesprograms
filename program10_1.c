#include<stdio.h>
//#define pi 3.14

double CircleArea(float fRadius)
{
    float pi = 3.14f;
    float area = 0.0f;
    area = pi * fRadius * fRadius;

    return area;
}
int main()
{
    float fvalue = 0.0f;
    double dRet = 0.0;
    printf("Enter number\n");
    scanf("%f",&fvalue);
    dRet = CircleArea(fvalue);
    printf("Area of circle is %0.2f",dRet);
    return 0;
}