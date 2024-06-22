#include<stdio.h>
void RangeDisplay(int istart,int iend)
{
    if(istart > iend)
    {
        printf("Invalid Range!");
    }
    else
    {
        for(istart;istart<=iend;istart++)
        {
            if(istart%2==0)
            {
                printf("\t%d",istart);
            }
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

    RangeDisplay(iValue1,iValue2);

    return 0;
}
