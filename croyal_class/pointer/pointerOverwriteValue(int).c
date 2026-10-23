#include<stdio.h>

void main()
{
    int a = 20, *b;

    printf("Value before copy of a: %d", a);
    printf("\nAddres brfore copy of a: %u",&a);

    b = &a;
    *b=200;

    printf("\nAfter copy a: %d", a);
    printf("\nAfter copy addres of a: %u", &a);
    printf("\nAfter copy b: %d", *b);
    printf("\nAfter copy addres of b: %u", &b);
}