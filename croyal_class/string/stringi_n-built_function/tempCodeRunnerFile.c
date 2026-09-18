#include<stdio.h>
#include<string.h>

void main()
{
    char name[100], copyName[100];

    printf("Entre the name: ");
    gets(name);

    strcpy(copyName, name);

    printf("Copied name: %s",copyName);

}