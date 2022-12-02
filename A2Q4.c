#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)   // updater in case of -ve frequency
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    printf("Enter the frequency : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}