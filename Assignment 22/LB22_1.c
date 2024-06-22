#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iNo1=1,iNo2=1;

    for(iNo1=1;iNo1<=iRow;iNo1++)
    {
        for(iNo2=1;iNo2<=iCol;iNo2++)
        {
            if(iNo2<=iNo1)
            {
                printf(" %c ",'*');
            }
            else
            {
                printf(" %c ",'#');
            }

        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1 , iValue2);

    return 0;
}