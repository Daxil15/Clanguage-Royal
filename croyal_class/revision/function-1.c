#include <stdio.h>

void arrayPrint(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("[%d]: %d\n", i, array[i]);
    }
}

void main()
{
    int a[5] = {1, 2, 3, 4, 5}, s = 5;
    arrayPrint(a, s);
}