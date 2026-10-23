#include<stdio.h>

void main()
{
    float a = 2.5;
    float *b;

    printf("Value before copy of a: %.2f", a);
    printf("\nAddres brfore copy of a: %u",&a);

    b = &a;

    printf("\nAfter copy a: %.2f", a);
    printf("\nAfter copy addres of a: %u", &a);
    printf("\nAfter copy pointer b: %.2f", *b);
    printf("\nAfter copy b: %.2f", b);
    printf("\nAfter copy addres of b: %u", &b);
}