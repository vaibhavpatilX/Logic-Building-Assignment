#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iSize)
{
    int iCnt=0,iDig=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iDig++;
        }
    }
    return iDig;
}
int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *ptr=NULL;

    printf("Enter Number Of Elements : ");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable To Allocate Memory !");
        return -1;
    }
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("\nEnter Element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet=Display(ptr,iSize);

    printf("---------------------------------------------------------------");
    printf("Frequency Of Even Numbers is : %d",iRet);

    free(ptr);
    return 0;
}

