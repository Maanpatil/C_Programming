#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Table of %d is : \n",iNo);

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}