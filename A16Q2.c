#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
            break;
        }

    }
    return -1;
}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iCnt = 0;
    int iRet = 0;
    int *p = NULL;
    
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

    iRet = FirstOcc(p, iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First Occurence of number is %d",iRet);
    }

    free(p);

    return 0;
}