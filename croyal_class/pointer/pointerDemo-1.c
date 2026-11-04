#include<stdio.h>

void main()
{
    int a=10, *b;

    printf("\n value of a = %d",a);
    printf("\n address of a = %u",&a);

    b = &a;

    printf("\n value of b = %d",*b); //copied address's value
    printf("\n copied address of b = %u",b); //to access copied address.
    printf("\n b's own address = %u",&b);
}