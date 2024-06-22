#include<stdio.h>

void Pattern(int iNo)
{

    int i = 2, cnt = 0;
    printf("\n");

    for(cnt = 1; cnt <= iNo; cnt++)
    {
        printf("\t %d",i*cnt);
    }
    printf("\n");
}

int main()
{
        int iValue = 0;

        printf("\n Enter Number to display the Pattern : ");
        scanf("%d",&iValue);

        Pattern(iValue);

        return 0;

}