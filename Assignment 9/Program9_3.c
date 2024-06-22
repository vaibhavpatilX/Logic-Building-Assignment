#include<stdio.h>

int EvenFactorial(int iNo)
{
    int i=0,iEven=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=2;i<=iNo;i++)
    {
        if(i%2==0)
        {
            iEven=iEven*i;
        }
    }
    return iEven;
}
int main()
{
    int iValue=0,iRet = 0;;

    printf("Enter The Value : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Even Factorial Of %d is %d",iValue,iRet);

    return 0;
}
