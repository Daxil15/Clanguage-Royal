#include<stdio.h>

int findAvg(int a, int b, int c) {
    return (a + b + c) / 3;
}

void main() {
    int num1 = 10, num2 = 20, num3 = 30;
    int avg = findAvg(num1, num2, num3);
    printf("The average is: %d\n", avg);
}