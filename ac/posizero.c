#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf ("enter number:\n");
    scanf ("%d",&num);
    if (num>0)
    {
        printf ("the number is positive:\n");
    }
    else if (num<0)
    {
        printf ("the number is negative :\n");
    }
   else
   {
        printf ("the number is zero:\n");
   }
    getch();
    return 0;
}
