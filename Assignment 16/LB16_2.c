#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iNo,int iLength)
{
    int i=0,Cnt=0;

    for(i=0;i<iLength;i++,Cnt++)
    {
        if(Arr[i]==iNo)
        {
            return Cnt;
        }
    }
    return -1;
}
int main()
{
    int iNo=0,i=0,iNo2=0,iRet=0;
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
        iRet=FirstOcc(p,iNo2,iNo);

        if(iRet==-1)
        {
            printf("There is No Such Number");
        }
        else
        {
            printf("First Occurrence Of %d is %d",iNo2,iRet);
        }
    }
    free(p);
    return 0;
}










