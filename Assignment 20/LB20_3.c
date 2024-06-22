#include<stdio.h>

void Pattern(int RNo1,int CNo1)
{
    int i = 0,j = 0;
    char ch = 'A';
    for(i=1;i<=RNo1;i++)
    {
        for(j=1;j<=CNo1;j++)
        {
            printf(" %c",ch);
        }
        ch++;
        printf("\n");
    }
}
int main()
{
    int CNo = 0, RNo=0;
    printf("\n Enter Any Numbers Of Rows And Number Of Columns : ");
    scanf("%d%d",&RNo,&CNo);

    Pattern(RNo,CNo);
    return 0;
}