#include<stdio.h>

struct Student
{
    int id;
    char name[20];
    float marks[3];
}s;

void getDate()
{
    printf("\nEnter the Id: ");
    scanf("%d", &s.id);
    printf("\nEnter the name: ");
    scanf("%s", &s.name);
    for(int i=0; i<3; i++)
    {
        printf("\nEnter the marks: ");
        scanf("%f", &s.marks[i]);
    }
}

void printMark()
{
    printf("\nId: %d  Name: %s  ",s.id, s.name);
    for(int i=0; i<3; i++)
    {
        printf("\nmarks %d: %d", i+1, s.marks[i]);
    }
}

void main()
{
    getDate();
    printMark();
}