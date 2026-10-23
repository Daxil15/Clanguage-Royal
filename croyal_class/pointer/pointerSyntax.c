#include<stdio.h>

void main()
{
    int a = 10;
    int *b;

    b = &a;

    printf("Value of a: %d", a);
    printf("\nAddres of a: %u",&a);

    printf("\nCopid value of b: %d", *b);
    printf("\nValue of b: %d", b);
    printf("\nAddres of b: %u",&b);
}//main end