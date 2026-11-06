#include <stdio.h>
#include <stdlib.h>

int add(int num1, int num2)
{
    int rlt;
    rlt = num1 + num2;
    return rlt;
}

int sub(int num1, int num2)
{
    int rlt;
    rlt = num1 - num2;
    return rlt;
}

int main()
{
    int choice, rlt, n1, n2;

    while (1)
    {
        printf("\n1-Addition\n2-Subtraction\n3-Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter 2 numbers: ");
                scanf("%d%d", &n1, &n2);
                rlt = add(n1, n2);
                printf("Addition: %d\n", rlt);
                break;

            case 2:
                printf("Enter 2 numbers: ");
                scanf("%d%d", &n1, &n2);
                rlt = sub(n1, n2);
                printf("Subtraction: %d\n", rlt);
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice, try again.\n");
        }
    }
    return 0;
}