#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n, sum=0;
    printf("enter n value:\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        sum=sum+i;
    }
    printf("the sum of numbers:%d",sum);
    getch();
    return 0;
}    