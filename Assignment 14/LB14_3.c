#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt=0;
    printf("----------------------------------------------------------");
    printf("\nNumbers which are Even and Divisible by 5 are ");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%5==0 && Arr[iCnt]%2==0)
        {
            printf("\t%d",Arr[iCnt]);
        }
    }
    printf("\n");
    return;
}
int main()
{
    int iSize=0,iCnt=0;
    int *ptr=NULL;

    printf("Enter Number Of Elements : ");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable To allocate the Memory!");
        return -1;
    }
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("\nEnter Element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    Display(ptr,iSize);

    free(ptr);
    return 0;
}
