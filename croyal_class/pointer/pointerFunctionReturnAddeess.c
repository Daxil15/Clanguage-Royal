#include<stdio.h>

int* test()
{
    static int c = 100;
    printf("\nVale of c : %d", c);
    printf("\nAddress of c : %u", &c);
    return &c;
}

void main()
{

    int *ptr;

    ptr = test();

    printf("\nVale of ptr : %d", *ptr);
    printf("\nAddress of ptr : %u", ptr);



}//main end