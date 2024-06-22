#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i =0;
    for(i=1;i<=5;i++)
    {
       printf(" %d\t",iNo*i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue); 
    
    return 0;
}