#include<stdio.h>

int CountEven(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDig=0,Cnt=0;

    while(iNo>0)
    {
        iDig=iNo%10;
        if(iDig>3 && iDig<7)
        {
            Cnt++;
        }
        iNo = iNo/10;
    }
    return Cnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}