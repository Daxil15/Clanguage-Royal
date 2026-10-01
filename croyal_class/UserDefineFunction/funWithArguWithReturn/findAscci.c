#include <stdio.h>

int findAscii(char c) {
    int ascii = (int)c;
    return ascii;
}

void main() {
    char ch = 'g';
    int ascii = findAscii(ch);
    printf("The ASCII value of %c is: %d\n", ch, ascii);
}