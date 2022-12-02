#include<stdio.h>

double SquareMeters(int iValue)
{
    double dAns = 0.0;
    dAns = iValue * 0.0929;
    return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeters(iValue);

    printf("Area in Square meters : %lf ",dRet);

    return 0;
}