#include<stdio.h>

void swap(int *a, int *b)
{
    printf("\nswap called...");

    printf("\nIn Swap befor swap funcetion called value of a: %d", *a);
    printf("\nIn Swap befor swap funcetion called value of b: %d", *b);

    int c;
    c = *a; 
    *a = *b;
    *b = c;

    printf("\nIn Swap after swap funcetion called value of a: %d", *a);
    printf("\nIn Swap after swap funcetion called value of b: %d", *b);
}

void main()
{
    int x = 10, y = 20;
    printf("\nmain called...");

    printf("\nIn Main befor swap funcetion called value of x: %d", x);
    printf("\nIn Main befor swap funcetion called value of y: %d", y);

    swap(&x, &y);

    printf("\nIn Main after swap funcetion called value of x: %d", x);
    printf("\nIn Main after swap funcetion called value of y: %d", y);
}