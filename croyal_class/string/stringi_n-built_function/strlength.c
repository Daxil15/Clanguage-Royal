#include<stdio.h>
#include<string.h>

void main()
{
   
    // char name[100];
    // int len;
    // printf("\n enter name ::");
    // gets(name);

    // //loop for while
    // len = strlen(name);
    // printf("\n len = %d",len);

    char name[100];
    int len;
    printf("Enter name: ");
    gets(name);

    len = strlen(name);
    printf("len: %d",len);
}