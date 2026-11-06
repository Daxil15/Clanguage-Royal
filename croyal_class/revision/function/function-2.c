#include <stdio.h>

void arrayPrint(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("[%d]: %d\n", i, array[i]);
    }
}

void findMax(int array[], int size)
{
    int i;
    int max = array[0];   

    for (i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("Max value: %d\n", max);
}

void main()
{
    int a[5] = {1, 2, 23, 4, 5}, s = 5;

    arrayPrint(a, s);
    findMax(a, s);
}