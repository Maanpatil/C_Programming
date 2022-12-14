#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    int i = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t",Arr[iCnt]);
            i++;
        }
    }
    if(i == 0)
    {
        printf("No such numbers found which are greater than %d and less than %d\n",iStart,iEnd);
    }
}

int main()
{
    int iSize = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int iCnt = 0;
    int *p = NULL;
    
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter the Ending point : \n");
    scanf("%d",&iValue2);
    
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

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}