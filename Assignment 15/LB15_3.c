#include<stdio.h>
#include<stdlib.h>

#define iSearch 11

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int i = 0;

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==iSearch)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0,iCnt = 0;
    int *P = NULL;
    BOOL bRet = FALSE;

    printf("\n-----------------------------------------------------------------------\n");

    printf("\n Enter Number Of Elements : ");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    if(P==NULL)
    {
        printf("Unable To Allocate Memory.");
        return - 1;
    }
    printf("\n-----------------------------------------------------------------------\n");

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter %d Elements : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }
    printf("\n-----------------------------------------------------------------------\n");

    bRet = Check(P,iSize);

    if(bRet == TRUE)
    {
        printf("11 is Present");
    }
    else
    {
        printf("11 is Absent");
    }
    printf("\n-----------------------------------------------------------------------\n");
    free(P);

    return 0;
}