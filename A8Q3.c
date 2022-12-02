#include<stdio.h>

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iFact = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
     
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number %d is : %d ",iValue,iRet);

    return 0;
}