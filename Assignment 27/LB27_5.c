#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
    
        start++;
        end--;
    }
    printf("Reverse string is : %s",&*str);
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}