#include<stdio.h>

void Pattern(int RNo1,int CNo1)
{
    int i = 0,j = 0;
    char ch1 = 'A';

    printf("\n");
    for(i=1;i<=RNo1;i++)
    {
        ch1 = 'A';
        char ch2 = 'a';
        for(j=1;j<=CNo1;j++)
        {
            if(i%2 == 0)
            {
                printf(" %c",ch2);
                ch2++;
            }
            else
            {
                printf(" %c",ch1);
                ch1++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int CNo = 0, RNo=0;

    printf("\n Enter Any Numbers Of Rows And Number Of Column : ");
    scanf("%d%d",&RNo,&CNo);
    Pattern(RNo,CNo);

    return 0;
}