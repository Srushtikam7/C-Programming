#include<stdio.h>
#include<conio.h>
int main()
{
    int digit,n, reverse =0;
    printf("enter number :\n");
    scanf("%d",&n);
    int or=n;
    while(n!=0)
    {
      digit= n % 10;
      reverse=reverse*10+digit;
      n=n/10;
    }
    printf("the reversed digit:%d",reverse);
    if(reverse==or){
        printf("polyndromic number\n");
    }
    else
        printf("not polindromic number:\n");
    getch();    
    return 0;
}