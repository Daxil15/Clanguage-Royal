#include<stdio.h>

typedef int myAlias;
void main()
{
    myAlias a = 5;
    myAlias b = 5;
    myAlias c = a + b;

    printf("Sum of a and b : %d", c);
}