#include<stdio.h>
#include<conio.h>
    void swap(int *a, int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;    
}
int main()
{
    int a,b;
    printf("enter a and b value:\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("after swapping:a=%d,b=%d",a,b);
    getch();
    return 0;
}
