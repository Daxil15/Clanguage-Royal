#include<stdio.h>
#include<string.h>

void main()
{
    char name1[100], name2[100];
    int result;

    printf("Entre name 1: ");
    gets(name1);

    printf("Entre name 2: ");
    gets(name2);

    result = strcmp(name1, name2);

    if(result == 0)
    {
        printf("same name.");
    }
    else
    {
        printf("diffrent name.");
    }
}