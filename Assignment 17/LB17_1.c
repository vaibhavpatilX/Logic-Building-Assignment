#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int i = 0,iMax = 0;

    for(i = 1;i < iLength;i++)
    {
        if(Arr[i] == 0)
        {
            iMax == Arr[i];
        }
        if(iMax < Arr[i])
        {
            iMax = Arr[i];
        }
    }
    return iMax;
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

    iRet = Maximum(P,iSize);

    printf("\n-----------------------------------------------------------------\n");
    printf("\n Largest number is %d\n",iRet);

    free(P);
    printf("\n-----------------------------------------------------------------\n");

    return 0;
}