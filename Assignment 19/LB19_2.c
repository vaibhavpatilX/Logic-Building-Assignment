#include<stdio.h>


void Pattern(int iRow,int iColumn)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iColumn; j++)
        {
                printf("%d\t",j);
        }
        printf("\n");
    }
    return;
}
int main()
    {
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter Number Of Rows And Number Of Columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}