#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*\t");
    }
    iCnt = 0;
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("#\t");
    }

    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}