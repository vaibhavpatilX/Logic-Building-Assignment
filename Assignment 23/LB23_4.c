#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkSmall(char ch)
{
	   if(ch >= 97 && ch <= 122)
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

       bRet = ChkSmall(cValue);

       if(bRet == TRUE)
	   {
		      printf("It is Small case Character\n");
	   }
	   else
	   {
		      printf("It is not a Small case Character\n");
	   }
	   return 0;
}