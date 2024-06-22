#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i=0,EvenMult=1,OddMult=1;

    if(iNo<0)
    {
        iNo=-(iNo);
    }
    for(i=2;i<=iNo;i++)
    {
        if(i%2!=0)
        {
            OddMult=OddMult*i;
        }
        else
        {
            EvenMult=EvenMult*i;
        }
    }
    return EvenMult-OddMult;
}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("Enter The Value => ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    
    printf("Multiplication Of %d Is %d",iValue,iRet);

    return 0;
}
