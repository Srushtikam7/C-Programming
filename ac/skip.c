#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    i=1;
    while(i<=5)
    {
        if (i==5)
        {
            i++;
            continue;
        }
        
    
    printf ("%d\n",i);
    i++;
    }
    getch();
    return 0;
}    