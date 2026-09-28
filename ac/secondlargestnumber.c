#include<stdio.h>
#include<conio.h>
int main()
{
    int second,largest,i,number,a[100],temp;
    printf("enter a number of elements:\n");
    scanf("%d",&number);
    printf("enter numbers:");
    for ( i=0; i <number ; i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    second=a[1];
    
    if(second>largest)
    {
       temp=largest;
       largest=second;
       second=largest;
    }
    for ( i = 2; i <number; i++)
    {
        if (a[i]>largest)
        {
            second=largest;
            largest=a[i];
        }
        else if(a[i]>second)
        {
            second=a[i];
        }
        
    }
    printf("the second largest number is:%d\n",second);
    getch();
    return 0;



}