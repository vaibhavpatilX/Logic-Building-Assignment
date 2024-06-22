#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkAlpha(char ch)
{
	   if(ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
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

       bRet = ChkAlpha(cValue);

       if(bRet == TRUE)
	   {
		      printf("It's Character\n");
	   }
	   else
	   {
		      printf("It's not Character\n");
	   }
	   return 0;
}