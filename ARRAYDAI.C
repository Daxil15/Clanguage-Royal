/*
	Author:-Daxil Chakrani
	DOC:- 13-8-2026
	Objective:- to learn the array (array project )
	Email:-chakranidaxil@gmail.com
*/
#include<stdio.h>
#define SIZE 4
int main()
{
	int a[SIZE], b[SIZE], c[SIZE];
	int x[SIZE][SIZE], y[SIZE][SIZE], z[SIZE][SIZE];
	int i, j, choice, choicesingle, choicemulti;


	printf("\n1---single");
	printf("\n2---multi");
	printf("\n3---Exit");
	printf("\nenter the choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:	for(i=0;i<SIZE;i++)
				{
					printf("Enter the vale of a[%d]: ",i);
					scanf("%d", &a[i]);
				}// a element sacn loop end

				for (i=0;i<SIZE;i++)
				{
					printf("Enter the vale of b[%d]: ",i);
					scanf("%d", &b[i]);
				}// b element sacn loop end

				singleoperation:
				printf("\n1----Addition");
				printf("\n2----Subtraction");
				printf("\n3----Multiplition");
				printf("\n4----Divsion");
				printf("\n5----Exit");
				printf("\nEnter the choice: ");
				scanf("%d", &choicesingle);

				switch(choicesingle)
				{
					case 1: for(i=0;i<SIZE;i++)
							{
								c[i] = a[i] + b[i];
								printf("%d\t",c[i]);
							}
							break;
					case 2: for(i=0;i<SIZE;i++)
							{
								c[i] = a[i] - b[i];
								printf("%d\t",c[i]);
							}
							break;	
					case 3: for(i=0;i<SIZE;i++)
							{
								c[i] = a[i] * b[i];
								printf("%d\t",c[i]);
							}
							break;
					case 4: for(i=0;i<SIZE;i++)
							{
								c[i] = a[i] / b[i];
								printf("%d\t",c[i]);
							}
							break;
					case 5: return(0);
							break;
					default: printf("Entre the valid choice form 1-5");
				 			 break;
				}// end of single array operation
				goto singleoperation;
				break;
		
		case 2: for(i=0;i<SIZE;i++)
				{
					for(j=0;j<SIZE;j++)
					{
						printf("Enter the value of x[%d][%d]: ",i,j);
						scanf("%d",&x[i][j]);
					}//scan of x inner loop end
				}//scan of x outter loop end

				for(i=0;i<SIZE;i++)
				{
					for(j=0;j<SIZE;j++)
					{
						printf("Enter the value of y[%d][%d]: ",i,j);
						scanf("%d",&y[i][j]);
					}//scan of y inner loop end
				}//scan of y outter loop end


				multioperation:
				printf("\n1----Addition");
				printf("\n2----Subtraction");
				printf("\n3----Multiplition");
				printf("\n4----Divsion");
				printf("\n5----Exit");
				printf("\nEnter the choice: ");
				scanf("%d", &choicemulti);

				switch(choicemulti)
				{
					case 1: for(i=0;i<SIZE;i++)
							{
								for(j=0;j<SIZE;j++)
								{
									z[i][j] = x[i][i] + y[i][j];
									printf("%d\t",z[i][j]);
								}//print of z elemrnt inner loop end
								printf("\n");
							}//print of z elemrnt outer loop end
							break;
					case 2: for(i=0;i<SIZE;i++)
							{
								for(j=0;j<SIZE;j++)
								{
									z[i][j] = x[i][i] - y[i][j];
									printf("%d\t",z[i][j]);
								}//print of z elemrnt inner loop end
								printf("\n");
							}//print of z elemrnt outer loop end
							break;
					case 3: for(i=0;i<SIZE;i++)
							{
								for(j=0;j<SIZE;j++)
								{
									z[i][j] = x[i][i] * y[i][j];
									printf("%d\t",z[i][j]);
								}//print of z elemrnt inner loop end
								printf("\n");
							}//print of z elemrnt outer loop end
							break;
					case 4: for(i=0;i<SIZE;i++)
							{
								for(j=0;j<SIZE;j++)
								{
									z[i][j] = x[i][i] / y[i][j];
									printf("%d\t",z[i][j]);
								}//print of z elemrnt inner loop end
								printf("\n");
							}//print of z elemrnt outer loop end
							break;
					case 5: return(0);
							break;
					default: printf("Entre the valid choice form 1-5");
				 			 break;
				}// end of single array operation
				goto multioperation;
				break;

		case 3: return(0);
				break;
		default: printf("Entre the valid choice form 1-3");
				 break;
	}


	return 0;
}//main