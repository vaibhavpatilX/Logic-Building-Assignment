#include<stdio.h>

int DollarToINR(int iNo)
{
    int iDol = 0;
    iDol = iNo * 70;

    return iDol;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Total Number Of USD : ");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);

    printf("\n %d$ Value In Indian Currency INR Is %dRs\n",iValue,iRet);

    return 0;
}
