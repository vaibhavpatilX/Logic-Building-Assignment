#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkCapital(char ch)
{
	   if(ch >= 65 && ch <= 90)
	   {
		     return TRUE;
	   }
	   return FALSE;
}

int main()
{
	   char cValue = '\0';
	   BOOL bRet = FALSE;

       printf("Enter the character : \n");
	   scanf("%c",&cValue);

       bRet = ChkCapital(cValue);

       if(bRet == TRUE)
	   {
		      printf("It's Capital Character\n");
	   }
	   else
	   {
		      printf("It's not Capital Character\n");
	   }
	   return 0;
}