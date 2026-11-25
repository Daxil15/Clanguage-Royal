#include<stdio.h>

void main()
{
    int a = 20;
    int *ptr, **p;

    ptr = &a;
    p = &ptr;

    printf("\nValue of a: %d", a);
    printf("\nValue of ptr: %d", *ptr);
    printf("\nValue of p: %d", **p);

    p = 30;
    printf("\nValue of a: %d", a);
}