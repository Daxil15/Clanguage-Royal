#include<stdio.h>
void main(){
    int marks[5],i,sum = 0;

    for(i=0;i<5;i++){
        printf("\nEnter the marks of all subjects: ");
        scanf("%d",&marks[i]);
    }
    
    for(i=0;i<5;i++){
        sum = sum + marks[i];
        printf("\nIndex: %d Marks: %d",i,marks[i]);
    }
    printf("\nThe sum of marks: %d",sum);
}