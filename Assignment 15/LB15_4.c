#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int i = 0,Cnt = 0;
    while(i<iLength)
    {
        if(Arr[i]==11)
        {
            Cnt++;
        }
        i++;
    }
    return Cnt++;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *P = NULL;

     printf("\n-----------------------------------------------------------------------\n");

    printf("\n Enter Number Of Elements : ");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    if(P == NULL)
    {
        printf("Unable To Allocate the Memory.");
        return - 1;
    }

    printf("\n-----------------------------------------------------------------------\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter %d Elements : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }
    printf("\n-----------------------------------------------------------------------\n");

    iRet = Frequency(P,iSize);

    printf("\n Return Frequency Number Of 11 is :  %d\n",iRet);
    printf("\n-----------------------------------------------------------------------\n");

    free(P);

    return 0;
}