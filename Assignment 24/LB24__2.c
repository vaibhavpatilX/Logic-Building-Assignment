#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("Given Character Small case is %c\n",ch);
    }
    else
    {
        if(ch >= 'a' && ch <= 'z')   
        {
            ch = ch - 32;
            printf("Given Character Upper Case is %c\n",ch);
        }
        else
        {
            printf("Given Character is Not Character is %c\n",ch);
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