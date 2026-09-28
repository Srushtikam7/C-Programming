#include<stdio.h>
int main()
{
    int days;
    printf ("enter days(1-7):\n");
    scanf ("%d",&days);
    switch (days)
    {
    case 1:
        printf("MONDAY\n");
        break;
    case 2:
        printf("TUESDAY\n");
        break;
    case 3:
        printf("WEDNESDAY\n");
        break;
    case 4:
        printf("THURSDAY\n");
        break;
    case 5:
        printf("FRIDAY\n");
        break;
    case 6:
        printf("SATURDAY\n");
        break;
    case 7:
        printf("SUNDAY\n");
        break;    
    default:
        printf("Invalid entry ,please enter valid entry\n");
        break;
    }
} 