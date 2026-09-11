#include<stdio.h>

void main()
{
    int end, arr[] = {10, 20, 30, 40}, rot, d;
    int length = sizeof(arr)/sizeof(arr[0]);
    int i, j;

    printf("Enter the number of times you want to left rotate: ");
    scanf("%d", &rot);

    for(i=1; i<=rot; i++)
    {
        end = arr[0];
        for(j=arr[1]; j>length; j++)
        {
            arr[j] = arr[j-1];
        }
        arr[0] = end;

    }

    for(i=0; i<length; i++)
    {
        printf("%d  ", arr[i]);
    }
}