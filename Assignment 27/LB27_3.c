//NE*
#include<stdio.h>

int FirstChar(char *str ,char ch)
{
    int iCnt=0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
        }
        str++;
        iCnt++;
    }
    return -1;
}
int main()
{
    char arr[20]="\0";
    char ch='\0';
    int iRet=0;

    printf("Enter String : \n");

    //scanf("%[^'\n']s",arr);

    printf("Enter The Character : \n");
    scanf("%c",&ch);

    iRet=FirstChar(arr,ch);

    if(iRet>=0)
    {
        printf("First Occurence Of Character %c Is In Index No :- %d",ch,iRet);
    }
    else
    {
        printf("Character Is Not Present");
    }

    return 0;
}
