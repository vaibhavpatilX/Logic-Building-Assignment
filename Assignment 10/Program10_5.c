#include<stdio.h>

double SquareMeter(int iValue)
{
    double dAns = 0.0;

    dAns = iValue*0.0929;
    
    return dAns;
}
int main()
{
    int iFeet=0;
    double dRet=0.0;

    printf("Enter Area In Square Feet : ");
    scanf("%d",&iFeet);

    dRet=SquareMeter(iFeet);

    printf("Area In Square Meter : %f",dRet);

    return 0;
}
