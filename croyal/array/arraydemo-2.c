#include<stdio.h>
void main(){
    int marks[5],i;

    /*printf("Enter the 1st student marks:  ");
    scanf("%d",&marks[0]);
    printf("Enter the 2nd student marks:  ");
    scanf("%d",&marks[1]);
    printf("Enter the 3rd student marks:  ");
    scanf("%d",&marks[2]);
    printf("Enter the 4th student marks:  ");
    scanf("%d",&marks[3]);
    printf("Enter the 5th student marks:  ");
    scanf("%d",&marks[4]);*/

    for(i=0;i<5;i++){
        printf("Enter the student marks:  ");
    scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++){
        printf("\nIndex: %d Marks: %d",i,marks[i]);
    }
}