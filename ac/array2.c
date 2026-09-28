#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5];
    for (int i = 0; i<5; i++)
    {
        printf("enter array value:\n");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <5; i++)
    {
        printf("%d\n",arr[i]);
    }
    int index,element;
    printf("enter index:\n");
    scanf("%d",&index);
    printf("element:%d",arr[index]);
    for(int i=0;i<5;i++)
    {
        if(arr[i]==element)
        {
            printf("index=%d\n",i);
            break;
        }
    }
    getch();
    return 0;
}