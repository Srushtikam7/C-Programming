#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
          return n*factorial(n-1);
    }
}
int main ()
{
    int n, result;
    printf("enter n value:\n");
    scanf("%d",&n);
    result=factorial(n);
    printf("factorial:%d",result);
    getch();
    return 0;
}    
    
    
    

