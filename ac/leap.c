#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("enter year:\n");
    scanf ("%d",&year);
    if (year%4==0 && year%100!=0) 
    {
        printf ("year is leap\n");
    }
    
    else
    {
        printf ("year is not leap\n");
    }
    getch();
    return 0;
}    
    