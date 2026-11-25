#include<stdio.h>

void update(int **ucr)
{
    **ucr = 89;
}

void main()
{
    int marks = 80;
    int *cr;
    cr = &marks;
    printf("Marks: %d", *cr);
    update(&cr);
    printf("\nMarks: %d", marks);
}