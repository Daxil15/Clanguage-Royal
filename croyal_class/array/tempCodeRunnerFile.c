#include<stdio.h>
 void main()
 {

    int arr[5],i;

    for(i=0;i<5;i++)
    {
        printf("\nEnter the value for index: %d",i);
        scanf("%d,&arr[i]");
    }
    
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            printf("\nIndex: %d Even value: %d",i,arr[i]);
        }
    }
}//main end