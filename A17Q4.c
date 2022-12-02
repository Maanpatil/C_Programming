#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iTemp = 0;

    for(iCnt1 = 0; iCnt1 < iLength; iCnt1++)
    {
        iCnt2 = 0;
        iTemp = Arr[iCnt1];
        while(iTemp != 0)
        {
            iTemp = iTemp / 10;
            iCnt2++;
        }
        if(iCnt2 == 3)
        {
            printf("%d\t",Arr[iCnt1]);
        }
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;
    
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);
    
    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Digits(p, iSize);   

    free(p);

    return 0;
}