#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,add;
    float aveg;
    printf ("enter a value:\n");
    scanf ("%d",&a);
    printf ("enter b value:\n");
    scanf ("%d",&b);
    printf ("enter c value:\n");
    scanf ("%d",&c);
    add=a+b+c;
    aveg=add/3;
    printf ("addition of three numbers is:%d\n",add);
    printf ("average of three numbers is:%f\n",aveg);
    getch();
    return 0;
}    

