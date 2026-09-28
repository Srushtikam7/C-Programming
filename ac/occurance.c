#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int count=0;
    char str[100];
    char ch;
    printf("enter  a string:");
    fgets(str,sizeof(str),stdin);
    printf("enter the charcter  to find:");
    scanf("%c",&ch);
    for (int i = 0;str[i]!='\0'; i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("the charcter '%c' occurs '%d' times i string:",ch,count);
    getch();
    return 0;
    

}