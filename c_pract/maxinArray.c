#include<stdio.h>

void maxNum(int a[])
{
    int i, max;
    max=a[0];

    for(i=0; a[i] != '\0'; i++)
    {
        if(max<=a[i])
        {
            max = a[i];
        }
    }
    printf("The maximum number: %d", max);
}//max end

void main()
{
    int arr[10] = {10, 20, 80, 30, 40};
    maxNum(arr);
}// main end