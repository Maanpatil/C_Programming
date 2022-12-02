#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo < 10 && iNo >= 0)
    {
        if(iNo == 0) {printf("Zero");}

        else if(iNo==1) {printf("one");}

        else if(iNo==2) {printf("Two");}
        
        else if(iNo==3){printf("Three");}
        
        else if(iNo==4){printf("Four");}
        
        else if(iNo==5){printf("Five");}
        
        else if(iNo==6){printf("Six");}
        
        else if(iNo==7){printf("Seven");}
        
        else if(iNo==8){printf("Eight");}
        
        else if(iNo==9){printf("Nine");}
    }
    else
    {
        printf("invalid Digit");
    }
}

int main()
{
    int iValue = 0;

    printf("Please number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}