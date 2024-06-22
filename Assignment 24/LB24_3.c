#include<stdio.h>

void Display(char ch)
{
    int i = 0;
    if(ch>='A' && ch<='Z')
    {
        for(i=ch; ch<='Z';ch++)
        {
            printf(" %c",ch);
        }
    }
    else
    {
        if(ch>='a' && ch<='z')
        {
            for(i=ch;ch>='a';ch--)
            {
                printf(" %c",ch);
            }
        }
        else
        {
            return;
        }
    }

    return;
}

int main()
{
    char cValue = '\0';

    printf("Enter The Character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;

}