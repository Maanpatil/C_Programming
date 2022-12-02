#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iFreq = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq++;
        }
    }
    return iFreq;
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

    printf("Enter the number of which you want frequency: \n");
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

    iRet = Frequency(p, iSize, iValue);

    printf("Frequency of %d is : %d\n",iValue,iRet);

    free(p);

    return 0;
}