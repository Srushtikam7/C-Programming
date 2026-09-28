#include<stdio.h>
#include<conio.h>
int main()
{
    int i,arr[12],largest;
    for(int i=0;i<12;i++)
    {
        printf("enter value:\n");
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for (int i = 1; i < 12; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
        
    }
    printf("largest number:%d",largest);
    getch();
    return 0;
}    