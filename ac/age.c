#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
    int age;
    char name[25];
    printf ("enter your name:\n");
    scanf  ("%s",name);
    printf ("enter your age:\n");
    scanf  ("%d",&age);
    printf("hello!,%s you are %d years old",name,age);
    if (age>=60)
       printf ("senior citizen,eligile to vote\n");
    else if  (age<18);
       printf ("not a senior citizen, under age to vote\n");   
    getch();
    return 0;
}       