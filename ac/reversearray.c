#include<stdio.h>
#include<conio.h>
int main()
{
    int digit,n[100],i, temp , a,reverse =0;
    printf("enter number of elements:\n");
    scanf("%d",&a);
    printf("enter array's element:");
    for ( i = 0; i<a; i++)
    {
        scanf("%d",&n[i]);
    }
    for ( i = 0; i <a/2; i++)
    {
        temp=n[i];
        n[i]=n[a-1-i];
        n[a-1-i]=temp;
    }
    
    printf("the reversed reverse:%d",reverse);
    for ( i = 0; i < a; i++)
    {
        printf("%d",n[i]);
    }
    
    getch();    
    return 0;
}