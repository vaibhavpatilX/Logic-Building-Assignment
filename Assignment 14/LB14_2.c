#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int Cnt=0;
    printf("\nNumbers which are Divisible by 5 are ");
    for(Cnt=0;Cnt<iSize;Cnt++)
    {
        if(Arr[Cnt]%5==0)
        {
            printf("%d\t",Arr[Cnt]);
        }
    }
    return;
}
int main()
{
    int iSize=0,Cnt=0;
    int *ptr=NULL;

    printf("Enter Number Of Elements : ");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable To allocate Memory");
        return -1;
    }

    for(Cnt=0;Cnt<iSize;Cnt++)
    {
        printf("Enter Element %d : \n",Cnt+1);
        scanf("%d",&ptr[Cnt]);
    }
    Display(ptr,iSize);

    free(ptr);
    return 0;
}
