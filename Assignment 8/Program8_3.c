#include<stdio.h>

int Factorial(int iNo)
{
    int i=0;
    int iFact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=iNo;i>1;i--)
    {
        iFact = iFact*i;
    }
    return iFact;
}
int main()
{
    int iValue=0,iRet=0;

    printf("\nEnter The Value : ");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("_____________________________________\n\n");
    printf("Factorial Of %d is %d\n",iValue,iRet);
    printf("_____________________________________\n");

    return 0;
}
