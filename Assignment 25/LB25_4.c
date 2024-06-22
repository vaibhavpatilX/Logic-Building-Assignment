#include<stdio.h>

#define TRUE 0
#define FALSE 1

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            return TRUE;
        }
        *str++;
    }
    return FALSE;
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter String : \n");
    scanf("%[^\n]",&Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("\nIt contains Vowel in it\n");
    }
    else
    {
        printf("\nIt does not contains Vowel in it\n");
    }

    return 0;
}