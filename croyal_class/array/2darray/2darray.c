#include<stdio.h>

void main()
{
    int a[3][2];

    //scan input
    printf("\n Enter monday morning data: ");
    scanf("%d", &a[0][0]);
    printf("\n Enter monday evn data: ");
    scanf("%d", &a[0][1]);
    
    printf("\n Enter Tues morning data: ");
    scanf("%d", &a[1][0]);
    printf("\n Enter Tues evn data: ");
    scanf("%d", &a[1][1]);

    printf("\n Enter wed morning data: ");
    scanf("%d", &a[2][0]);
    printf("\n Enter wed evn data: ");
    scanf("%d", &a[2][1]);

    //display the result
    printf("\n monday morning data = %d",a[0][0]);
    printf("\n monday evn data = %d",a[0][1]);

    printf("\n tue morning data = %d",a[1][0]);
    printf("\n tue evn data = %d",a[1][1]);
    
    printf("\n wed morning data = %d",a[2][0]);
    printf("\n wed evn data = %d",a[2][1]);

}// main end