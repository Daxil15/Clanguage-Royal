#include<stdio.h>
#include<conio.h>

void findEvenOdd(int n)
{
    if(n % 2 == 0)
    {
        printf("%d is even number.", n);
    }// if end
    else
    {
        printf("%d is odd number.", n);
    }// else end
}//findEvenOdd end

void findSquare(int n)
{
    int sqr;
    sqr = n * n;
    printf("Square of %d: %d", n, sqr);
}//findSquare end

void findCube(int n)
{
    int cube;
    cube = n * n * n;
    printf("Cube of %d: %d", n, cube);
}//findCube end

void CelsiusToFahrenheit(float c)
{
    float f;
    f = (c * 1.8) + 32;
    printf("Celsius: %.2f",c);
    printf("Fahrenheit: %.2f",f);
}//CelsiusToFahrenheit end

void findMaximum(int a, int b)
{
    if(a > b)
    {
        printf("%d is maximum number.", a);
    }
    else
    {
        printf("%d is maximum number.", b);
    }
}//findMaximum end

void areaCircle(float radius)
{
    float area;
    area = 3.14 * radius * radius;
    printf("\nArea of circle: %.2f", area);
}//areaCircle end

void areaRectangle(float length, float width)
{
    float area;
    area = length * width;
    printf("\nArea of rectangle: %.2f", area);
}//areaRectangle end

void areaTriangle(float base, float height)
{
    float area;
    area = 0.5 * base * height;
    printf("\nArea of triangle: %.2f", area);
}//areaTriangle end

void simpleInterest(float p, float r, float t)
{
    float simpleInterest;
    simpleInterest = (p * r * t) / 100;
    printf("\nSimple interest: %.2f", simpleInterest);
}//simpleInterest end

void main()
{
    int num, num1, num2, choice;
    float cels, rad, len, wid, base, heg, pri, rat, time;
    clrscr();

    start:
    printf("\n1----Even Odd.");
    printf("\n2----Square of number.");
    printf("\n3----Cube of number.");
    printf("\n4----Converts Celsius to Fahrenheit.");
    printf("\n5----Maximum number.");
    printf("\n6----The area of a circle.");
    printf("\n7----The area of a rectangle.");
    printf("\n8----The area of a triangle.");
    printf("\n9----Computes simple interest.");
    printf("\n10----Exit");
    printf("\nEnter the operation number from 1-9: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: printf("\nEven - Odd");
                printf("\nEnter the number for the operation: ");
                scanf("%d", &num);
                findEvenOdd(num);
                break;
        case 2: printf("\nSquare of number");
                printf("\nEnter the number for the operation: ");
                scanf("%d", &num);
                findSquare(num);
                break;
        case 3: printf("\nCube of number");
                printf("\nEnter the number for the operation: ");
                scanf("%d", &num);
                findCube(num);
                break;
        case 4: printf("Converts Celsius to Fahrenheit.");
                printf("\nEnter the Celsius value: ");
                scanf("%f", &cels);
                CelsiusToFahrenheit(cels);
                break;
        case 5: printf("\nMaximum number.");
                printf("\nEnter the first number: ");
                scanf("%d", &num1);
                printf("\nEnter the second number: ");
                scanf("%d", &num2);
                findMaximum(num1, num2);
                break;
        case 6: printf("\nThe area of a circle.");
                printf("\nEnter the radius of circle: ");
                scanf("%f", &rad);
                areaCircle(rad);
                break;
        case 7: printf("\nThe area of a rectangle.");
                printf("\nEnter the length of rectangle: ");
                scanf("%f", &len);
                printf("\nEnter the width of rectangle: ");
                scanf("%f", &wid);
                areaRectangle(len, wid);
                break;
        case 8: printf("\nThe area of a triangle.");
                printf("\nEnter the length of triangle: ");
                scanf("%f", &base);
                printf("\nEnter the width of triangle: ");
                scanf("%f", &heg);
                areaTriangle(base, heg);
                break;
        case 9: printf("Computes simple interest.");
                printf("\nEnter the principal amount: ");
                scanf("%f", &pri);
                printf("Enter the rate of interest in '%%': ");
                scanf("%f", &rat);
                printf("Enter the time period (in years): ");
                scanf("%f", &time);
                simpleInterest(pri, rat, time);
                break;
        case 10: exit(0);
        default: printf("Enter the operation number from 1-9 only.");
    }// switch end
    goto start;
}// main end