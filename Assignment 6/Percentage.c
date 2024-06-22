// not completed 

#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
    float fAns = 0.00f;

    if(iNo1<iNo2 || iNo1==0)
    {
        printf("Invalid Data");
    }
    else
    {
        fAns = iNo2/iNo1 *100; 
        printf("Percentage = %.2f%% \n",fAns);
    }
    return fAns;
}
int main()
{
   int iValue1 = 0;
   int iValue2 = 0;
   float fRet = 0.00f;

   printf("Please Enter Total Marks => ");
   scanf("%d",&iValue1);
   printf("Please Enter Obtained Marks => ");
   scanf("%d",&iValue2);

   fRet = Percentage(iValue1,iValue2);

   printf("Percentage = %0.2f",fRet);

   return 0;
}
