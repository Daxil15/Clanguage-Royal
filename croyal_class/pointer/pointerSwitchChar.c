#include<stdio.h>

void main()
{
    char x = 'D';
    char *p = &x;

    printf("\nValue of x: %c", x);
    printf("\naddress of x: %u", &x);

    printf("\nValue of p: %c", *p);
    printf("\naddress of p: %u", p);
}