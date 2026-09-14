#include<stdio.h>

void main()
{
    int i, a[10], index = 0, value;
    for(i=0;i<10;i++)
    {
        printf("Enter the element for %d: ",i);
        scanf("%d", &a[i]);
    }

    printf("Enter the value to be delet: ");
    scanf("%d", &value);

    printf("Old Array: ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i] != value)
        {
            a[index] = a[i];
            index++;
        }
    }
    printf("\nNew Array: ");
    for(i=0;i<index;i++)
    {
        printf("%d\t",a[i]);
    }
}