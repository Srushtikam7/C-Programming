#include<stdio.h>
#include<conio.h>
int main()
{
    int i ,count;
    for ( i = 1; i <=100; i++)
    {
        if (i%2==0)
        {
           printf("%d\n",i);
           count++; 
        }
        
    }
    printf("total numbers :%d",count);    
getch();
return 0;    
}