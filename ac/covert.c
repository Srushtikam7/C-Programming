#include <stdio.h>
#include <conio.h>
int main()
{
    float C ,F;
    printf ("enter C value:\n");
    scanf ("%f",&C);
    F=(C*9/5)+32;
    printf ("the temperature is:%f",F);
    getch();
    return 0;
}