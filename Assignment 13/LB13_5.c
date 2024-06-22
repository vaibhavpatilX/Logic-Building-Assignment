#include<stdio.h>

int CountDiff(int iNo)
{
    /*if(iNo<0)
    {
        iNo=-iNo;
    }
    */

    int iDig=0,iEven=0,iOdd=0;

    while(iNo>0)
    {
        iDig=iNo%10;
        if(iDig %2 == 0)
        {
            iEven = iDig + iEven;   
        }
        else
        {
            iOdd = iDig + iOdd;
        }
        iNo = iNo/10;
    }

    return iEven - iOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}