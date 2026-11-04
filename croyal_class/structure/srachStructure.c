#include<stdio.h>
#define SIZE 3

struct employee
{
    int id;
    int age;
    float salary;
}s[SIZE];

void inputData()
{
    int i;
    for(i=0; i<SIZE; i++)
    {
        printf("Enter date of employee-%d:\n",i);
        printf("Id: ");
        scanf("%d", &s[i].id);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Salary: ");
        scanf("%f", &s[i].salary);
    }
}// inputData end

void display()
{
    int i;
    printf("\nID\tAGE\tSALARY\n");
    printf("----------------------------");
    for(i=0; i<SIZE; i++)
    {
        printf("\n%d\t%d\t%.2f", s[i].id, s[i].age, s[i].salary);
    }
}

void search()
{
    int i, id;
    printf("\nEnter the search Id: ");
    scanf("%d", &id);

    for(i=0; i<SIZE; i++)
    {
        if(s[i].id == id)
        {
            printf("\n%d\t%d\t%.2f", s[i].id, s[i].age, s[i].salary);
            break;
        }
    }
    if(i == SIZE)
    {
        printf("Data not found.");
    }
}

void main()
{
    inputData();
    display();
    search();
}