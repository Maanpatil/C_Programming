#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        iCnt = 2 * i;
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}