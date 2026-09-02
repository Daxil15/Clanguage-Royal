#include<stdio.h>

void main()
{
    char c = 'D';
    int a = 67, i;
    
    printf("The character is: %c\n", c);
    printf("The ASCII value of %c is: %d\n", c, c);// implicit type casting

    printf("a:%d\n", a);
    printf("a: %c\n", a);// implicit type casting

    for(i=65; i<=90; i++)
    {
        printf("%c ", i);
    }//print a-z

}// end main