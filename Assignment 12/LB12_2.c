#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo>0)
    {
        iDigit = iNo%10;
        if(iDigit == 0)
        {
            return 1;
        }
        iNo/=10;
    }
    return 0;
}
int main()
{
    BOOL iValue=0,iRet=0;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    iRet=ChkZero(iValue);

    if(iRet==TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There Is No Zero");
    }
    return 0;
}
