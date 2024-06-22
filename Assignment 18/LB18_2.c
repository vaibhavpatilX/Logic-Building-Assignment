#include<stdio.h>


void Pattern(int iNo)
{
    int i = 1;
    printf("\n");
    while(iNo >= i)
    {
            printf("\t %d \t #",iNo);
            iNo--;
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