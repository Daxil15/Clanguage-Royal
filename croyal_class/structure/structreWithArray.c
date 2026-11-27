#include<stdio.h>
struct Employee
{
    int eid;
    char ename[20];
    float empSalary;
    int increments[2];
    int totalIncremnt;
    int baseSalary;
} e[2];

void getEmployeeDetails()
{

    int i, j, sum = 0;
    for (i = 0; i < 2; i++)
    {
        printf("\n enter %d employee id :", i + 1);
        scanf("%d", &e[i].eid);
        printf("\n enter %d employee name :", i + 1);
        scanf("%s", &e[i].ename);
        printf("\n enter %d employee salary :", i + 1);
        scanf("%f", &e[i].empSalary);

        for (j = 0; j < 2; j++)
        {
            printf("\n enter %d incrment :", j + 1);
            scanf("%d", &e[i].increments[j]);
            sum = sum + e[i].increments[j];
        }
        s[i].totalIncremnt = sum;

    }
}

void printEmployeeDetails()
{

    int i, j;
    for (i = 0; i < 2; i++)
    {
        printf("\n %d employee id = %d :", i + 1, e[i].eid);

        printf("\n  %d employee name = %s :", i + 1, e[i].ename);

        printf("\n %d employee salary = %f :", i + 1, e[i].empSalary);

        for (j = 0; j < 2; j++)
        {
            printf("\n %d incrment = %d", j + 1, e[i].increments[j]);
        }

        printf("\n %d employee totalIncremnt = %d :", i + 1, e[i].totalIncremnt);
    }
}

void main()
{
    getEmployeeDetails();
    printEmployeeDetails();
}