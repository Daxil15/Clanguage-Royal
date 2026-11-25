#include<stdio.h>

struct Student
{
    int id;
    char name[20];
    float marks;
}s;

void getDate()
{
    printf("\nEnter the Id: ");
    scanf("%d", &s.id);
    printf("\nEnter the name: ");
    scanf("%s", &s.name);
    printf("\nEnter the marks: ");
    scanf("%f", &s.marks);
}

void printMark()
{
    printf("\nId: %d  Name: %s  Marks: %.2f",s.id, s.name, s.marks);
}

void main()
{
    getDate();
    printMark();
}