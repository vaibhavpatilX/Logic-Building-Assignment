#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int i = 0,iMax = 0,iMin = 0;
    for(i = 0;i < iLength;i++)
    {
        if(i == 0)
        {
            iMax = iMin = Arr[i];
        }
        if(iMax < Arr[i])
        {
            iMax = Arr[i];
        }
        if(iMin > Arr[i])
        {
            iMin = Arr[i];
        }
    }
    return(iMax - iMin);
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int *P = NULL;

    printf("\n Enter Number Of Elements : ");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    
    if(P==NULL)
    {
        printf("\n------------------------------------------------------------------\n");
        
        printf("\n Unable To Allocate Memory.");
        return - 1;
    }

    printf("\n-------------------------------------------------------------------\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter %d Element : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    iRet = Difference(P,iSize);

    printf("\n-----------------------------------------------------------------\n");
    printf("\n Difference is %d\n",iRet);

    free(P);
    printf("\n-----------------------------------------------------------------\n");

    return 0;
}