#include<stdio.h>

void main()
{
    int a[10], i, choice, rev = 0, lastdig, temp, count = 0;

    for(i=0;i<10;i++)
    {
        printf("Enter the valu for %d: ",i);
        scanf("%d", &a[i]);
    }

    printf("Array: ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\n1----Get Odd numbers.");
    printf("\n2----Get Even numbers.");
    printf("\n3----Get Palendrom numbers.");
    printf("\n4----Get Prime numbers.");
    printf("\n5----Get Perfect numbers.");

    printf("Enter the choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: printf("Odd Numbers:");
                for(i=0;i<10;i++)
                {
                    if(a[i] % 2 != 0)
                    {
                        printf("%d\t", a[i]);
                    }
                }
                break;
        
        case 2: printf("Even Numbers:");
                for(i=0;i<10;i++)
                {
                    if(a[i] % 2 == 0)
                    {
                        printf("%d\t", a[i]);
                    }
                }
                break;

        case 3: printf("Palendrom numbers: ");

                for(i=0;i<10;i++)
                {
                    temp = a[i];
                    while(temp>0)
                    {
                        lastdig = temp % 10;
                        rev = rev * 10 + lastdig;
                        temp = temp / 10;                        
                    }
                    if( a[i] == rev)
                    {
                        printf("%d", a[i]);
                        count++;
                    }
                }
                printf("Count: %d",count);
                break;
        
        default: printf("Invalid choice...");
    }
}