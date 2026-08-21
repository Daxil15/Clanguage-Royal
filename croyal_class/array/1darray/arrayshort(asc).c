#include<stdio.h>

//bubble sort

// 90 100 160 54 80
//p1:
//90>100 -no swap
//90 100 160 54 80
//100>160 - no swap
//90 100 160 54 80
//160>54 -swap
//90 100 54 160 80
//160>80 -swap
//
//90 100 54 80 160


//p2:
//90>100 -no swap
//90 100 54 80 160
//100>54 -swap
//90 54 100 80 160
//100>80 -swap
//90 54 80 100 160
//100>160 no swap

//90 54 80 100 160

//p3:
//90>54 swap
//54 90 80 100 160
//90>80 -swap
//54 80 90 100 160
//90>100 -no swap
//90>160 -no swap

//54 80 90 100 160  


void main()
{
    int arr[5],i,j,temp;

    printf("\nEnter the 5 elements in array: ");
    for(i=0;i<5;i++)
    {
        printf("\nEnter the %d element: ",i);
        scanf("%d",&arr[i]);
    }// element input loop end

    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }// swap if end
        }//inner loop end
    }//shorting loop end
    for(i=0;i<5;i++)
    {
        printf("\nIndex: %d Element: %d",i,arr[i]);
    }//print loop end
}// main end