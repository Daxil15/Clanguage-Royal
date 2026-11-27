#include<stdio.h>

struct Car
{
    int cId;
    char cname[20];
    int cprice;
};

void newPrice(struct Car *c)
{
    c->cprice = 1000000;
}

void main()
{
    struct Car c = {101, "TATA", 1500000};
    
    //this pointer '->'
    printf("Car Id: %d", c.cId);
    printf("\nCar name: %s",c.cname);
    printf("\nPrice: %d", c.cprice);
    newPrice(&c);
    printf("\nDiscounted Price: %d", c.cprice);
}