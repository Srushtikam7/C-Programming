#include <stdio.h>
#include <conio.h>
int main()
{
    float l,w, area , peri;
    printf ("enter l value:\n");
    scanf ("%f",&l);
    printf ("enter w value:\n");
    scanf ("%f",&w);
    area = l*w;
    peri = 2*(l+w);
    printf ("area of rectangle is:%f\n",area);
    printf ("perimeter of rectangle is:%f\n",peri);
    getch();
    return  0;

}