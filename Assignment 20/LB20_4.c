#include<stdio.h>


void NoPattern(int No1,int No2)
{
   int i = 0,j = 0;
   int Num = 4;
  
   for(i = 1;i <= No1;i++)
   {
       for(j = 1;j <= No2; j++)
       {
           printf(" %d",Num);
       }
       Num--;
       printf("\n");
   }
   
}
int main()
{
    int RNo = 0, CNo = 0;
    
    printf("Enter Number Of Rows And Number Of Columns : ");
    scanf("%d%d",&RNo,&CNo);
    NoPattern(RNo,CNo);
   
    return 0;
}