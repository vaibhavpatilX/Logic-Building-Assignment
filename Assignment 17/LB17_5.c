#include<stdio.h>
#include<malloc.h>

void DigitsSum(int Arr[],int iLength)
{
   int i = 0,Sum = 0,Temp = 0,Dig = 0;

   for(i = 0;i < iLength;i++)
   {
       Temp = Arr[i];
       Sum = 0;
       while(Temp > 0)
       {
           Dig = (Temp%10);
           Sum = Sum + Dig;
           Temp /= 10;
       }
       printf("\n Summation Of Digits of Each number is  %d\n",Sum);
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


    DigitsSum(P,iSize);


    free(P);
    printf("\n-----------------------------------------------------------------\n");

    return 0;
}