#include<stdio.h>

void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    printf("The character is: %c\n", c);
    printf("The ASCII value of %c is: %d\n", c, c);// implicit type casting
}// end main