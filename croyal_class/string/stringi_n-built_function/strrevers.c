#include<stdio.h>
#include<string.h>

void main()
{
    char name[100];

    printf("Enter name: ");
    gets(name);

    strrev(name);

    printf("\nRevers: %s",name);
}