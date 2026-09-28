#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,choice,add,sub,multi,div,result;
    printf("enter a value:\n");
    scanf("%d",&a);
    printf("enter b value:\n");
    scanf("%d",&b);
    printf("=========MENU OF OPERATIONS=======\n");
    printf("1-ADDITION\n");
    printf("2-SUBTRACTION\n");
    printf("3-MULTUPLICATION\n");
    printf("4-DIVISION\n");
    printf("enter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: add=a+b;
                printf("result=%d+%d=%d\n",a,b,add);
                break;
        case 2: sub=a-b;
                printf("result=%d-%d=%d\n",a,b,sub);
                break;
        case 3: multi=a*b;
                printf("result=%d*%d=%d\n",a,b,multi);
                break;
        case 4: div=(a/b);
                if (b==0)
                {
                    printf("division by zero is not allowed\n");
                }
                else{
                    printf("result=%d/%d=%d\n",a,b,div);
                }
                break;    
        default:
                printf("Invalid enter ,Please enter valid choice\n");            
                
                                        
                
    }
    getch();
    return 0;
}