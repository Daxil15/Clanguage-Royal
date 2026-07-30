#include<stdio.h>

void main(){
    int i=1, sum=0, n;
    printf("Enter the no. : ");
    scanf("%d",&n);
    do{
        sum = sum + i;
        i++;
    }//do end
    while(i<=n);
    printf("\n Sum: %d",sum);
}// mani end