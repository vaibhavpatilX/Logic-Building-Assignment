#include<stdio.h>



void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0,Num = 1;
   

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(Num <= 9)
            {
               printf("\t%d",Num);
               Num++;
            }
            else
            {
                Num = 1;
                printf("\t%d",Num);
                Num++;
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