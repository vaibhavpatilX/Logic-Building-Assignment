#include<stdio.h>

int CountOdd(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDig=0,Cnt=0;

    while(iNo>0)
    {
        iDig=iNo%10;
        if(iDig %2 != 0)
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

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return 0;
}