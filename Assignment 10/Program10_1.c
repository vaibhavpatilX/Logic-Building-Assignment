#include<stdio.h>

double CircleArea(float fRadius)
{
    float Area=0.0;
    float PI=3.14;

    Area=(PI*fRadius*fRadius);

    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area Of Circle is %f\t",dRet);

    return 0;
 }
