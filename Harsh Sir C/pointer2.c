#include <stdio.h>
void change(int x)
{
    x = 90;
}
void changePointer(int *a)
{
    *a = 90;
    printf("A: %u\n", a);
}
int main()
{
    // int a = 11;
    
    // printf("Before A : %d\n",a);
    // change(a);
    // printf("After A : %d\n",a);
    
    int a = 77;
    printf("Before A : %d\n", a);
    printf("&A: %u\n", &a);
    changePointer(&a);
    printf("After A : %d\n", a);
    // int arr[5];
    // scan(arr); // &arr[0]
    return 0;
}
// int *arr
// *(arr+0)
// *(arr+1)
// *(arr+2)
// *(arr+3)
// *(arr+4)