#include<stdio.h>
int OddFactorial(int iNo)
{
    int i=0,iOdd=1;
    if(iNo<0)
    {
        iNo=-(iNo);
    }
    for(i=2;i<=iNo;i++)
    {
        if(i%2!=0)
        {
            iOdd=iOdd*i;
        }
    }
    return iOdd;
}
int main()
{
    int iValue=0,iRet = 0;

    printf("Enter The Value => ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    
    printf("Factorial Of %d is %d",iValue,iRet);

    return 0;
}
