#include<stdio.h>

void main()
{
    int arr[5];
    int i, j, flag, count = 0;

    for(i=0; i<5; i++)
    {
        printf("Enter the value: ");
        scanf("%d", &arr[i]);
    }// scan array loop

    printf("Prime Nummbers: ");
    for(i=0; i<5; i++)
    {
        flag = 1;
        for(j=2; j<arr[i]/2;j++)
        {
            if(arr[i] % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            printf("%d\t", arr[i]);
            count++;
        }
    }

    printf("\ncount: %d", count);
}