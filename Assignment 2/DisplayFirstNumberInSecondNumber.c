#include<stdio.h>

    void Display(int iNo, int iFrequency)
    {
        int iCnt = 0;

        for(iCnt =1;iCnt<=iFrequency;iCnt++)
        {
            printf("%d\t",iNo);
        }
    }

int main() 
{

    int iValue = 0; 
    int iCount = 0;

    printf("Enter number\t"); 
    scanf("%d",&iValue);

    printf("Enter frequency\t"); 
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}