#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b;
    printf ("enter a value:\n");
    scanf ("%d",&a);
    printf ("enter b value:\n");
    scanf ("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf ("after swapping:a=%d,b=%d",a,b);
    getch();
    return 0;
    
}