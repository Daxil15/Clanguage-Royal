#include<stdio.h>

void withdraw(int *bal, int amount)
{
    *bal = *bal - amount;

    printf("\n%d is withdraw successful...", amount);

}

void main()
{
    int balance = 10000, amt;

    printf("\nBalance before withdraw: %d", balance);
    printf("\nEnter the amount to withdraw: ");
    scanf("%d", &amt);
    withdraw(&balance, amt);
    printf("\nBalance after withdraw: %d", balance);
}