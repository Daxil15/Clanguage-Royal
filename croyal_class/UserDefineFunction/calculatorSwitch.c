#include<stdio.h>
#include<string.h>


void add()
{
    int a = 5, b = 5, c;
    c = a + b;
    printf("\nSum: %d",c);
}

void sub()
{
    int a = 5, b = 5, c;
    c = a - b;
    printf("\nDeffrence: %d",c);
}

void mul()
{
    int a = 5, b = 5, c;
    c = a * b;
    printf("\nMultiply: %d",c);
}

void divide()
{
    int a = 5, b = 5, c;
    c = a / b;
    printf("\nDivide: %d",c);
}


void main()
{
    int choice;
    printf("**********************CALC*******************************");
    printf("\n1-----Addition");
    printf("\n2-----Subtraction");
    printf("\n3-----Multiply");
    printf("\n4-----Divide");
    printf("\nEnter the choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: add();
                break;
        case 2: sub();
                break;
        case 3: mul();
                break;
        case 4: divide();
                break;
    }    
}