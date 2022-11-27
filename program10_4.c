#include<stdio.h>


double FhtoCs(float fTemp)
{
      float celsius;

      celsius = (fTemp - 32)*5/9;

      return celsius;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("%f",dRet);

    return 0;
}