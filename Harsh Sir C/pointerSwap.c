#include <stdio.h>

int main()
{
    int a = 10, b = 20, temp;
    int *p, *q;

    p = &a;
    q = &b;

    printf("Before -> a: %d and b: %d\n", a, b);

    temp = *p;
    *p = *q;
    *q = temp;

    printf("After  -> a: %d and b: %d\n", a, b);
    return 0;
}