#include<stdio.h>
//#define pi 3.14

double RectArea(float fWidth, float fHeight)
{
    float RectArea = 0.0f;
    RectArea = fWidth * fHeight;

    return RectArea;
}
int main()
{
    float fvalue1 = 0.0f;
    float fvalue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width\n");
    scanf("%f",&fvalue1);
    
    printf("Enter heigth\n");
    scanf("%f",&fvalue2);

    dRet = RectArea(fvalue1, fvalue2);
    printf("Area of rectangle is %0.2f",dRet);
    return 0;
}