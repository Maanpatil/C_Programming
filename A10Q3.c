#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iAns = 0;
    int iMeters = 1000;
    iAns = iNo * iMeters;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is : %d ",iRet);

    return 0;
}