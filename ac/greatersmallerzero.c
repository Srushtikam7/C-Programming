#include <stdio.h>
#include <conio.h>
int main()
{
    int a ,b;
    printf ("enter a value:");
    scanf ("%d",&a);
    printf ("enter b value:\n");
    scanf ("%d",&b);
    if (a>b)
    {
        printf ( "greater value:%d",a);
    }
    else if (b>a)
    {
        printf ("greater value:%d",b);
    }
    else if (a=b)
    {
        printf ("equal value:%d %d",a,b);
    }
    else
        printf ("invalid choice");
    getch();
    return 0;
}        
