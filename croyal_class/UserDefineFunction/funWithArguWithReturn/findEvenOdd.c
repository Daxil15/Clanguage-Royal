#include<stdio.h>

int evanOdd(int num) {
    if (num % 2 == 0) {
        return 1; // Even
    } else {
        return 0; // Odd
    }
}

void main() {
    int number = 16;
    int result = evanOdd(number);
    
    if (result == 1) {
        printf("%d is Even\n", number);
    } else {
        printf("%d is Odd\n", number);
    }
}