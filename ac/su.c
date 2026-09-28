#include <stdio.h>

int main()
{
    int a, b, dif;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    dif = a - b;

    printf("dif = %d", dif);

    return 0;
}