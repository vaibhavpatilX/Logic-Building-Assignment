#include<stdio.h>

int KMtoMeter(int iNo)
{
    int Met =0;
    
    Met = iNo*1000;

    return Met;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter The Kilometer : ");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("%d Kilometer is %d Meter",iValue,iRet);

    return 0;
}
