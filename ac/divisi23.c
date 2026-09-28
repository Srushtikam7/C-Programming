#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf ("enter n value:\n");
    scanf ("%d",&n);
    if (n%2==0 && n%3==0)
    {
        printf (" the number is divisible by 2 and 3\n ");
    }
    else if(n%2==0)
    {
        printf ("the number is divisible by 2\n");
    }
    else if(n%3==0)
    {
        printf ("the number is divisible by 3\n ");
    }
    else
        printf ("the number  is either divisible by 2 or 3\n");
    getch();
    return 0; 
}       



    


