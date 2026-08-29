#include <stdio.h>

int main(void)

{

    int choice;

    do
    {

        printf("\n1. Hello\n");

        printf("2. C Programming\n");

        printf("3. Exit\n");

        printf("Choice: ");

        scanf("%d", &choice);

        if (choice == 1)
        {    
            printf("Hello!\n");
        }
        else
        { 
            if(choice == 2)
            {
                 printf("Keep learning C!\n");
            }
        }

    } while (choice != 3);

    return 0;
}