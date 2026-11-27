#include<stdio.h>

struct Car
{
    int cId;
    char cname[20];
};

void main()
{
    struct Car c = {101, "TATA"};
    struct Car *ptr;
    ptr = &c;
    
    //this pointer '->'

    printf("Car Id: %d", ptr->cId);
    printf("\nCar name: %s",ptr->cname);
}