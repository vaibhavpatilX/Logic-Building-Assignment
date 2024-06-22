#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[],int iNo,int iLength)
{
    int i=0;

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}
int main()
{
    int iNo=0,i=0,iNo2;
    BOOL bRet=FALSE;
    int *p = NULL;

    printf("Enter The Number Of Elements : ");
    scanf("%d",&iNo);
    printf("Enter The Number To Find : ");
    scanf("%d",&iNo2);

    p=(int *)malloc(iNo*(sizeof(int)));

    if(p==NULL)
    {
        printf("Unable To Allocate Memory !!!");
        return 1;
    }
    else
    {
        for(i=0;i<iNo;i++)
        {
            printf("\nEnter The Element %d : ",i+1);
            scanf("%d",&p[i]);
        }
        bRet=Check(p,iNo2,iNo);

        if(bRet==TRUE)
        {
            printf("TRUE");
        }
        else
        {
            printf("FALSE");
        }

    }
    free(p);
    return 0;
}










