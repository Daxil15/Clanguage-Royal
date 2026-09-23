#include<stdio.h>
#include<string.h>


void add()
{
    int a = 5, b = 5, c;
    c = a + b;
    printf("\nSum: %d",c);
}

void sub()
{
    int a = 5, b = 5, c;
    c = a - b;
    printf("\nDeffrence: %d",c);
}

void mul()
{
    int a = 5, b = 5, c;
    c = a * b;
    printf("\nMultiply: %d",c);
}

void divide()
{
    int a = 5, b = 5, c;
    c = a / b;
    printf("\nDivide: %d",c);
}


void main()
{
    printf("Main function !!!");
    add();
    sub();
    mul();
    divide();
}