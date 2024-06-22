//NE*
#include<stdio.h>

int LastChar(char *str ,char ch)
{
    int Cnt=0,i=-1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            i=Cnt;
        }
        str++;
        Cnt++;
    }
    return i;
}
int main()
{
    char Arr[20]="\0";
    char cValue='\0';
    int iRet=0;

    printf("Enter The String : ");
    //scanf("%[^'\n']s",arr);

    printf("Enter The Character : ");
    scanf("%c",&cValue);

    iRet=LastChar(Arr,cValue);

    if(iRet>=0)
    {
        printf("Last Occurence Of Character %c Is In Index No :- %d",cValue,iRet);
    }
    else
    {
        printf("Character Is Not Present");
    }

    return 0;
}