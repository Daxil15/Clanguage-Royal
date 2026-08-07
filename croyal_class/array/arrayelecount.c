#include<stdio.h>

void main()
{
    int i, count=0, n, countelm;

    printf("Enter the length of array: ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        printf("\nEnter the %d element of array: ",i);
        scanf("%d",&a[i]);
    }// scan array ele loop

    printf("\nEnter the element to count: ",countelm);
    scanf("%d",&countelm);
    for(i=0;i<n;i++)
    { 
        if(a[i]==countelm)
        {
            count++;
        }
    }//count array loop
    if(count==0)
    {
        printf("\nThe element %d is not in the array",countelm);
    }
    else
    {
        printf("\nThe count of %d in the array is: %d",countelm,count);
    }
}// main end