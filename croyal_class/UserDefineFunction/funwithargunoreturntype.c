#include<stdio.h>

//without return type with arguments / params

//call by value.
void add(int a,int b){

    int ans=0;
    ans = a + b;
    printf("\n ans = %d",ans);

}

void findpers(float marks1,float marks2){

    //local variable..
    float ans=0.0;
    ans = (marks1 + marks2)/2;
    //printf("\n avg = %f",ans);
    printf("\n avg = %.2f",ans);

}

void printArray(int a[]){

    int i;
    for(i=0;i<3;i++){
        printf("\n a[i] = %d",a[i]);
    }   

}

void main()
{
    
    //local variable
    int no1=10,no2=20, arr[3]={11,22,33};
    //add(10,20);
    add(no1,no2); //calling --->
    findpers(20.50,21);
    printArray(arr);
   
}