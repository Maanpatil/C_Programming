#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt1 = 0;
    int iTemp = 0;
    int iDigit = 0;
    int iSum = 0;

    for(iCnt1 = 0; iCnt1 < iLength; iCnt1++)
    {
        iSum = 0;
        iTemp = Arr[iCnt1];
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }
        printf("%d\t",iSum);
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

    DigitsSum(p, iSize);   

    free(p);

    return 0;
}