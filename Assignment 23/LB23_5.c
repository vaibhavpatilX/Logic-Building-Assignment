#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A' :
        case 'a':
            printf("Your Exam at 7AM.");
            break;

        case 'B':
        case 'b':
            printf("Your Exam At 8.30AM.");
            break;
        
        case 'C':
        case 'c':
            printf("Your Exam At 9.20AM.");
            break;
        
        case 'D':
        case 'd':
            printf("Your Exam At 10.30AM");
            break;
        
        default:
            printf("Invalid Exam Of Division.");
            break;
    }
    return;
}

int main()
{
    char cValue = '\0';

    printf("\nEnter Your Division : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    
    return 0;

}