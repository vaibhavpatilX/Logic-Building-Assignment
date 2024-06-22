#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=1,j=1;

    char Ch='A';
    
    for(i=1;i<=iRow;i++)
    {
        char Ch='A';
        for(j=1;j<=iCol;j++,Ch++)
        {
            printf(" %c ",Ch);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter The Number Of Rows And Columns => ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}

