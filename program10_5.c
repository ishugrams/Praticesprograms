#include<stdio.h>

double SquareMeter(int iNo)
{
    float icnt = 0;
    icnt = iNo * 0.0929;
    return icnt;

}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%f",dRet);


    return 0;
}