#include<stdio.h>

void Display(int iNo)
{
    while(iNo > 0)
    {
        printf("*\t");
        iNo--;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number of stars you want to print : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}