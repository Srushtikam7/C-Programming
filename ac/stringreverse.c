#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,len;
    char temp,string[100];
    printf("enter your string:\n");
    scanf("%s",string);
    len=strlen(string);
    for (int i = 0; i < len/2; i++)
    {
        temp=string[i];
        string[i]=string[len-1-i];
        string[len-1-i]=temp;
    }
    printf("reversed string is:%s\n",string);
    getch();
    return 0;
}    
    