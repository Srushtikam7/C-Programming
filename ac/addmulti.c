#include<stdio.h>
#include<conio.h>

int operations (int a ,int b)
{
    int sum,sub,multi;
     sum = a+b;
     sub = a-b;
     multi = a*b;
     printf("addition=%d\n",sum);
     printf("subtraction=%d\n",sub);
     printf("multiplication=%d\n",multi);
return 0;
}
int main()
{
    int a,b;
    printf("enter a and b values:\n");
    scanf("%d%d",&a,&b);
    operation(a,b);
    getch();
    return 0;
}


