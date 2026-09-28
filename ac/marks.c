#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,d,e,add;
    float aveg;
    printf ("enter a value:\n");
    scanf ("%d",&a);
    printf ("enter b value:\n");
    scanf ("%d",&b);
    printf ("enter c value:\n");
    scanf ("%d",&c);
    printf ("enter d value:\n");
    scanf ("%d",&d);
    printf ("enter e value:\n");
    scanf ("%d",&e); 
    add=a+b+c+d+e;
    aveg=add/5;
    printf ("addition of three numbers is:%d\n",add);
    printf ("average of three numbers is:%f\n",aveg);
    getch();
    return 0;
}    

