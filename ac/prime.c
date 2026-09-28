#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n;
    printf("enter n value:\n");
    scanf("%d",&n);
    if (n>1)
    {
        for (i=2;i<=n/2;i++)
        {
            if (n%i==0)
            {
                printf ("the number is not prime\n");
                break;
            }
            
        }
        if (i>n/2)
        {
            printf("the number is prime\n");
        }
        
    }
     
getch();
return 0;
}
