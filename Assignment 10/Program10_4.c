#include<stdio.h>

double FhtoCs(float ffValue)
{
    float fAns = 0.0;

    fAns = (ffValue-32)*(5.0/9.0);
    return fAns;
}

int main()
{
    float fValue=0.0;
    double fRet=0.0;

    printf("Enter Temperature In fValue : ");
    scanf("%f",&fValue);

    fRet = FhtoCs(fValue);

    printf("Temperature In Celsius is : %f\t",fRet);

    return 0;
}
