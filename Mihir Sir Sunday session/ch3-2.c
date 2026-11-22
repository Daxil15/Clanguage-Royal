#include <stdio.h>

void main()
{
    char item[100];
    float price;

    printf("ENter the item: ");
    scanf("%s", &item);
    printf("ENter the price: ");
    scanf("%f", &price);
    printf("***LIST OF ITEMS***");
    printf("\nItem\t Price");
    // printf("\n%s\t%f", item, price);
    printf("\n%s", item);
    printf("\t%.2f", price);
}