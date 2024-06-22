#include<stdio.h>


void Pattern(int iNo)
{
    int i = 1;
    printf("\n");
    while(i <= iNo)
    {
            printf("\t %d \t *",i);
            i++;
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