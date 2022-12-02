#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dAns = 0.0;
    dAns = (fTemp - 32) * 5/9;
    return dAns;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("temperature in celsius : %lf ",dRet);

    return 0;
}