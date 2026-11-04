#include<stdio.h>

void main()
{
    char name[] = "Daxil123";
    char *p = &name[0];
    int count = 0;
    
    while(*p!='\0')
    {
        if(*p >= '0' && *p <= '9')
        {
            count++;
        }
        *p++;
    }
    printf("\nNumber char in array: %d", count);
}