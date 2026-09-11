#include<stdio.h>

void main()
{
    char string[100], copy[100];
    int i,j=0;

    printf("Enter the word: ");
    gets(string);

    for(i=0; string[i]!='\0';i++)
    {
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            copy[j] = string[i];
            j++;
        }
    }
    copy[j] = '\0';
    printf("%s", copy);
}