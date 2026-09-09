#include<stdio.h>

void main()
{
    char name[50], ch;
    int i, found;

    printf("\nEnter string : ");
    gets(name);
    printf("\nString: %s", name);

    printf("\nEntre the character to search: ");
    scanf("%c", &ch);

    for(i=0; name[i]!='\0'; i++)
    {
        if(name[i] == ch)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("\n%c found in %s", ch, name);
    }
    else
    {
        printf("\n%c not found in %s", ch, name);
    }
}