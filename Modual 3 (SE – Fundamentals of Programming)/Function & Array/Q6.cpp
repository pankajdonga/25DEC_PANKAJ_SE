//Q.6 WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include<stdio.h>
main()
{
	int matrix1[2][2],matrix2[2][2];
	int i,j,sum[2][2];
	
	printf("Enter Any 4 Number= ");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}
	
	printf("\n=====================================\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t",matrix1[i][j]);
			
		}
		printf("\n");
		
	}
	
	printf("=====================================\n");
	
	printf("Enter Any 4 Number= ");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	printf("=====================================\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d\t",matrix2[i][j]);
			
		}
		printf("\n");	
	}
	
	printf("\n==============Addition Of Matrix=======================\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			sum[i][j]=matrix1[i][j] + matrix2[i][j];
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}

	
	printf("\n==============Substraction Of Matrix=======================\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			sum[i][j]=matrix1[i][j] - matrix2[i][j];
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
	
	printf("\n==============Multiplication Of Matrix=======================\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			sum[i][j]=matrix1[i][j] * matrix2[i][j];
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
}
