#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    char ch = 'A';

    printf("\n");
    for(i = 1;i <= iNo;i++)
    {
            printf("\t %c",ch);
            ch++;
    }
    printf("\n");
    return;
}

int main()
{
    int iValue = 0;

    printf("Enter numbers of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}