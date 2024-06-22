#include<stdio.h>

void RangeDisplayRev(int istart,int iend)
{
    if(istart > iend)
    {
        printf("Invalid Range!");
    }
    else
    {
        for(;istart<=iend;iend--)
        {
            printf("\t%d",iend);
        }
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter The Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter The Ending Point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);


    return 0;
}

