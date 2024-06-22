#include<stdio.h>


void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    char ch = 'a';

    for(i=1;i<=iRow;i++)
    {
        ch = 'a';
        for(j=1;j<=iCol;j++)
        {
            if(i%2 != 0)
            {
                printf(" \t%c",ch++);
            }
            else
            {
                printf(" \t%d",j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("\n Enter Number Of Rows And Number Of Columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}