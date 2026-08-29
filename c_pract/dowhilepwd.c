/*
    Exercise: Write a C program which keep asking password until 1234 is entered using do-while loop.
*/

#include<stdio.h>

void main()
{
    int pwdu = 1234, temp;

    do
    {
        printf("\nEnter the password: ");
        scanf("%d", &temp);

        if (temp == pwdu)
        {    
            printf("Hello!\n");
        }
        else
        {
            printf("Enter the correct password");
        }

    } while (temp != pwdu);

}