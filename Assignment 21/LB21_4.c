#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iNo1=1,iNo2=1;

    for(iNo1=1;iNo1<=iRow;iNo1++)
    {
        for(iNo2=1;iNo2<=iCol;iNo2++)
        {
            if(iNo1%2!=0)
            {
                printf(" %2d ",iNo2);
            }
            else
            {
                printf(" %d ",-iNo2 );
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter The Number Of Rows And Columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}





