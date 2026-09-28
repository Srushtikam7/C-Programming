#include<stdio.h>
#include<conio.h>
#include<string.h>
int palindrome(char str[])
{
    int i, j;

    j = strlen(str) - 1;

    for(i = 0; i < j; i++, j--)
    {
        if(str[i] != str[j])
            return 0;
    }

    return 1;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    if(palindrome(str))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
