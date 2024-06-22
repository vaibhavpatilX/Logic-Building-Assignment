#include<stdio.h>

int Difference(char *str)
{
    int iCapCnt = 0 ,iSmallCnt = 0;;

    if(*str == '\0')
    {
        return 0;
    }
    else
    {
        while(*str != '\0')
        {
            if(*str >= 'a' && *str <= 'z')
            {
                iSmallCnt++;
            }
            if(*str >= 'A' && *str <= 'Z')
            {
                iCapCnt++;
            }
            str++;
        }
        return iSmallCnt-iCapCnt;
    }

}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}