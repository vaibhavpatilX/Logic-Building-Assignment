#include<stdio.h>
void RangeDisplay(int istart,int iend)
{
    if(istart > iend || istart < 0)
    {
        printf("Invalid Range!");
    }
    else
    {
        int isum=0;

        while(istart <= iend)
        {
            isum = isum + istart;
            istart++;
        }
        printf("\t%d",isum);
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

