#include<stdio.h>

void main()
{
    char name[] = "daxil";
    char *p = &name[0];
    int len = 0; 
    
    while(*p!='\0')
    {
        len++;
        *p++;
    }
    printf("\nlen of array: %d", len);
}