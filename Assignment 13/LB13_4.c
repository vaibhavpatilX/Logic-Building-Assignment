#include<stdio.h>

int MultDigits(int iNo)
{
    /*if(iNo<0)
    {
        iNo=-iNo;
    }
    */

    int iDig=0,iMult=1;

    while(iNo>0)
    {
        iDig=iNo%10;
        if(iDig != 0)
        {
            iMult = iDig * iMult;   
        }
        iNo = iNo/10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}