#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {

        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter number: \n"); 
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}