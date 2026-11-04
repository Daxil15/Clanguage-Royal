#include<stdio.h>

void main()
{
    char name[] = "daxil";
    char *p = &name[0];
    int i;

    printf("\n name = %s",name);
    printf("\n address of name = %u",&name);
    printf("\n address of name[0] = %u",&name[0]);
    printf("\n address of name[1] = %u",&name[1]);

    for(i=0; i<5; i++)
    {
        printf("\n char = %c",*p++);
    }
}