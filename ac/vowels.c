#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
    char str[100];
    int i,count=0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u')
           {
            count++;
            printf("%c ", str[i]);
    }
}
    printf("total number of vowels:%d",count);
    

    return 0;
}