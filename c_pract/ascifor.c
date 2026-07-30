#include<stdio.h>

void main(){
    int choice;
    printf("\n1----Print Asci of A-Z.");
    printf("\n2----Print Asci of a-z.");
    printf("\nEnter the choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1: for(char i='A';i<='Z';i++){
                    printf("%c -> %d \n",i,i);
                }
                break;
        case 2: for(char i='a';i<='z';i++){
                    printf("%c -> %d \n",i,i);
                }
                break;
    };
}//main end