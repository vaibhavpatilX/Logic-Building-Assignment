#include<stdio.h>


void Pattern(int iNo)
{
    int i = 1;

    printf("\n");
    while(iNo >= i)
    {
        //printf("\t # ");
        printf("\t # \t %d \t *",i);
        //printf("\t *");
        i++;
    }
    printf("\n");
    return;
}
int main()
{
    int iValue = 0;

    printf("\n Enter Number to display the Pattern : ");
    scanf("%d",&iValue);

    Pattern(iValue);


    return 0;
}