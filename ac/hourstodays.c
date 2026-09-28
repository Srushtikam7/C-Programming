#include <stdio.h>
#include <conio.h>
int main()
{
    float days,hours;
    printf ("enter hours:\n");
    scanf ("%f",&hours);
    days = hours/24;
    printf ("number of days:%f",days);
    getch();
    return 0;
}