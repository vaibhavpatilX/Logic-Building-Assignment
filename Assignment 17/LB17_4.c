#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
    int i = 0,Temp = 0,Digit = 0,Cnt = 0;

    for(i = 0;i < iLength; i++)
    {
        Temp = Arr[i];
        Cnt = 0; 
        while(Temp > 0)
        {
            Digit = Temp%10;
            Cnt++;
            Temp /= 10;
        }
        if(Cnt == 3)
        {
            printf("\n 3 Digit Element is : %d\n",Arr[i]);
        }
    }
    return;
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
        
        printf("\n Unable To Allocate Memory");
        return - 1;
    }

    printf("\n-------------------------------------------------------------------\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter %d Element : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }
    printf("\n-----------------------------------------------------------------\n");


    Digits(P,iSize);


    free(P);
    printf("\n-----------------------------------------------------------------\n");

    return 0;
}