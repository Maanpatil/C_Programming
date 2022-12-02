#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
            break;
        }
    }
}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
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

    bRet = Check(p, iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number %d is Present",iValue);
    }
    else
    {
        printf("Number %d is not Present",iValue);
    }

    free(p);

    return 0;
}