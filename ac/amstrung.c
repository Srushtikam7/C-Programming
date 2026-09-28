#include<stdio.h>
#include<conio.h>
int main()
{
    int n,digit,or,sum=0;
    printf("enter  n value:\n");
    scanf("%d",&n);
    or=n;
    while (n!=0)
    {
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if (or==sum)
    {
        printf("the number is amstrung\n");
    }
    else
        printf("the number is not amstrung\n");
        getch();
        return 0;
}