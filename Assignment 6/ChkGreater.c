#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int i = 0;
BOOL ChkGreater(int iNo)
{
    if(iNo>=100)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{

    int iValue = 0;

    BOOL bRet = TRUE;

    printf("Please enter number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);
    if(bRet < TRUE)
    {
        printf("Greater");  
    }
    else
    {
        printf("Smaller");
    }
    
    return 0;
}