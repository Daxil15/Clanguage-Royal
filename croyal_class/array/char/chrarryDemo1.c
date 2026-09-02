#include<stdio.h>

void main()
{
    char c[5] = "Daxil";
    char name[20];
    int i;

    for(i=0; i<5; i++)
    {
        printf("%c ", c[i]);
    }//print a-z

    printf("\nEnter your name: ");
    scanf("%s", name);

    printf("Your name is: %s\n", name);
}// main end