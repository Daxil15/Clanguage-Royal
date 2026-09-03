#include<stdio.h>

void main()
{
    int num,i=0,j;
    int arr[16];

    printf("Enter a number: ");
    scanf("%d",&num);

    while(num > 0)
    {
        arr[i] = num % 2;
        num = num / 2;
        i++;
    }//while loop end

    printf("%d--> ",num);
    for(j = i-1; j>=0; j--)
    {
        printf("%d\t", arr[j]);
    }//for loop end


}// main end