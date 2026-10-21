#include<stdio.h>
#define ROW 3
#define COL 3

void main()
{
    int arr1[ROW][COL], arr2[ROW*COL];
    int i, j, temp;

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("\nEntre the value for arr[%d][%d]: ",i,j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nUnsorted 2D array: \n");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

    int index=0;

    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            arr2[index] = arr1[i][j];
            index++;
        }
    }

    printf("\nUnsorted 1D array \n");
    for(i=0; i<ROW*COL; i++)
    {
        printf("%d\t",arr2[i]);
    }

    for(i=0; i<ROW*COL; i++)
    {
        for(j=0; j<ROW*COL-1-i; i++)
        {
            if(arr2[i] > arr2[i+1])
            {
                temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }

    printf("\nSorted 1D array \n");
    for(i=0; i<ROW*COL; i++)
    {
        printf("%d\t",arr2[i]);
    }

}// end of main