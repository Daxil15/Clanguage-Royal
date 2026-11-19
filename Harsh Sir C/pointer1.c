#include <stdio.h>
int main()
{
    int *ptr;
    int a = 90;
    // * store address of a in ptr
    ptr = &a;
    // * get the value at the address stored in ptr
    printf("Value at address of a : %d\n\n", *ptr);
    printf("A : %d\n", a);
    printf("&A : %u\n", &a);
    printf("ptr : %u\n", ptr);
    printf("*ptr : %d\n", *ptr);
    printf("&ptr : %u\n", &ptr);
    return 0;
}