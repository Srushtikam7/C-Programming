#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
    char  color[10];
    printf ("enter color(red,yellow,green):\n");
    scanf ("%s",color);
    if (strcmp(color,"red")==0)
        printf ("stop\n");
    else if (strcmp(color,"yellow")==0)
        printf ("get ready\n");
    else if (strcmp(color,"green")==0)
        printf ("Go\n");
    else 
        printf ("invalid choice ,please enter valid choice");
    getch();
    return 0;            

}