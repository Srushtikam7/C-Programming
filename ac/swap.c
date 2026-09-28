#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,temp;
    printf ("enter a value:\n");
    scanf ("%d",&a);
    printf ("enter b value:\n");
    scanf ("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf ("after swapping:a=%d,b=%d",a ,b);
    getch();
    return 0;
}
        